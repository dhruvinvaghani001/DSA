#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data ;
    Node* next;
    
    //constructer
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //destructer
    ~Node(){
        int value = this ->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory free"<<value<<endl;
   }


};
void insertAtHaad(Node* &head,int d){
  //new node craete
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;
}
void insertAtTail(Node* &tail,int d){
    Node*temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head){
  Node* temp = head;
  while(temp !=NULL){
    cout<<temp->data<<"->";  
    temp=temp->next;
  }
  cout<<"NULL"<<endl;

}

void insertAtPosition(Node* &tail,Node* &head,int position , int d){
    //insert at satrting position
    if(position==1){
        insertAtHaad(head,d);
        return;
    }
    
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    //insert node at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }


    //insert in th middle
   
    Node* nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deletePosition(Node* & head,int position){
    //delete first node
    if(position==1){
        Node*temp = head;
        head = head->next;
        //memory free og head node
        temp->next = NULL ;
        delete temp;

    }
    else{
        //deletetion any middle node or last
        Node*  curr =head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    //create a new node
    Node* node1 = new Node(10);
    cout<< node1->data <<endl;
    cout<< node1->next <<endl;

    //head pointer which points head of node1
    Node* head = node1;
    Node* tail = node1;
    print(head); 
    insertAtTail(tail,12);
    print(head); 
     insertAtTail(tail,15);
    print(head); 
    // insertAtHaad(tail,15);
    // print(head);
    // insertAtHaad(tail,25);
    // print(head);
    insertAtPosition(tail,head,4,25);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deletePosition(head,4);
    print(head);

    return 0;
}