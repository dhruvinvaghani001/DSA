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

// insert node at head og linked list
void insertAtHead(Node* &head,int d){
  //new node craete
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;
}

// insert node at tail of linked list but refrence given of tail
void insertAtTail(Node* &tail,int d){
    Node*temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

//insert node at tail with out giving refrence of tail
void insertAtTailWithOutTail(Node * &head,int d){
     Node* nodetoinsert = new Node(d);
     Node* temp = head;
     while(temp->next !=NULL){
        temp = temp->next;
     }
     temp->next = nodetoinsert;
     temp = nodetoinsert;

}

// to display linked list 
void print(Node* &head){
  Node* temp = head;
  while(temp !=NULL){
    cout<<temp->data<<"->";  
    temp=temp->next;
  }
  cout<<"NULL"<<endl;

}

//insert node at given position 
void insertAtPosition(Node* &head,int position , int d){
    //insert at satrting position
    if(position==1){
        insertAtHead(head,d);
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
        insertAtTailWithOutTail(head,d);
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
    // Node* node1 = new Node(10);
    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;

    //head pointer which points head of node1
    Node* head = NULL;
    insertAtHead(head,15);
    insertAtHead(head,20);
    print(head);
    insertAtTailWithOutTail(head,3);
    print(head);
    insertAtTailWithOutTail(head,50);
    print(head);
    deletePosition(head,3);
    print(head);
    insertAtPosition(head,4,100);
    print(head);

    return 0;
}