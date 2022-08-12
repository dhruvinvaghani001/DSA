#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data ;
    Node* prev;
    Node* next;
    
    //constructer
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> prev = NULL;
    }

    //destructer
     ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory free"<<value<<endl;
   }
};

//traves throgh out in linked list and print liked list
void print(Node* &head){
  Node* temp = head ;
  

  while(temp != NULL){
    cout << temp->data << " -> " ;  
    temp = temp -> next;
  }
  cout<<" NULL"<<endl;

}

//gives lenght Of the Linked List 
int getLenghOfLinkedList(Node* head){
    Node *temp = head;
    int i=0;
    while(temp != NULL){
        temp = temp->next;
        i++;
    }
    return i;
}

//insert at head of linked list
void insertAtHead(Node* &head , int d){
    //creation of new node which is insert at head position

    //empty list 
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp ;
    }
    else
    {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp ;
        head = temp ;
    }
}

//insert at tail of linked list
void insertAttail(Node* &head , int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp ;
    }
    else{
        Node* insertedNode = new Node(d);
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp -> next ;
        }
        temp -> next = insertedNode ;
        insertedNode -> prev = temp ;
    }
}

//insert at position 
void inserAtPosition(Node* &head , int position , int d ){

    if(position==1){
        insertAtHead(head,d);
        return;
    }  

    Node* temp = head;
    int cnt =1;

    while(cnt < position-1){
        temp = temp -> next ;
        cnt ++ ;
    }  
    
    if(temp->next == NULL ){
        insertAttail(head,d);
        return;
    }

    Node* insertNode = new Node(d);
    insertNode -> next = temp -> next;
    temp -> next -> prev = insertNode ;
    temp -> next = insertNode ;
    insertNode -> prev = temp ;

    
}

//delete given node position 
void deletePosition(Node* & head,int position){
    //delete first node
    if(position==1){
        Node*temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
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
        curr -> prev = NULL ;
        prev -> next = curr -> next ;
        curr -> next -> prev = prev ; 
        curr -> next = NULL ;
        delete curr;
    }
}

int main(){
 
    // Node* node1 = new Node(5);
    Node* head = NULL;

    print(head);
    cout << "lenght of linked list is :" << getLenghOfLinkedList(head) << endl ;
    
    insertAtHead(head,10);
    print(head);

    insertAttail(head,25);
    print(head);
    
    insertAtHead(head,20);
    print(head);
    

    inserAtPosition(head,4,60);
    print(head);

    deletePosition(head,4);
    print(head);

    return 0;
}