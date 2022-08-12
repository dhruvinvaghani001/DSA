#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node* next ;

    //construccter
    Node( int value ){
        this -> data = value ;
        this -> next = NULL ;
    }

    //destructer
    ~Node(){
        int value = this -> data ;
        if(this -> next != NULL){
            delete next ;
            next = NULL; 
        }
        cout<<"meomry free "<< value <<endl;

    }
};

//insert at head
void insertNode(Node* &tail , int element ,int d){
     
    //if list is empty
    if(tail == NULL){
        Node* newNode = new Node(d) ;
        tail = newNode ;
        newNode -> next = newNode ; //to make circular 
    }
    else{
        //non ampty list 
        //asuming element is present in the list
        Node *curr = tail ;
        
        // for finding given  element 
        while(curr->data != element){
            curr = curr->next ;
        }

        
        Node* temp = new Node(d);
        temp -> next = curr -> next ;
        curr -> next = temp ;
    }


}
//delte node given value
void deleteNode(Node* &tail , int element ){
    if(tail ==NULL){
        cout<<"lisy is empty " <<endl;
        return ;
    }
    else{
        
        //non empty list 
        //assuming that value is present in linked list 
        Node* prev = tail;
        Node* curr = prev->next ;
        while(curr->data != element){
            prev = curr ;
            curr =curr -> next ;
        }
        prev -> next = curr -> next ;

        //one node linked list 
        if(curr == prev ){
            tail = NULL;
        }

        //2 node linked list  
        if(tail == curr){
            tail = prev  ;
        }
        curr -> next = NULL;
        delete curr;
    }
}
void print(Node* tail ) {
    Node* temp = tail ;
    if(tail ==NULL){
        cout<<"list is empty " <<endl ;
        return ; 
    }
    do{
        cout<< tail -> data << " " ;
        tail = tail -> next ;
    }while(tail != temp );
    cout<<endl;
}
bool isCircular(Node *head){
    if(head == NULL){
        return false ;
    }
    Node* temp = head -> next ;
    while(temp != NULL && temp != head){
        temp = temp -> next ;
    }
     if(temp == head){
        return true;
    }
    return false;
}

int main(){

    Node* tail = NULL;
    
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,11);
    print(tail);

    deleteNode(tail,3);
    print(tail);
    
   if(isCircular(tail)){
    cout<<"circular in nature "<<endl;
   }
   else{
    cout<<"not circular in nature ";
   }

    return 0;
}