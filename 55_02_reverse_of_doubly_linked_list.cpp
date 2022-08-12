#include<iostream>
#include <bits/stdc++.h>
#include "doubly_linked_list_function.cpp"
using namespace std;

//reverse function
void reverse(Node* &head){
    Node * temp = NULL ;
    Node * current = head ;
    Node *forward = NULL;
    while(current != NULL){
        temp = current->prev; 
        current->prev = current->next; 
        current->next = temp;             
        current = current->prev; 
    }
    if(temp != NULL ) 
        head = temp->prev; 
}
int main(){

    Node* head = NULL ;

    insertAtHead(head,10);
    print(head) ;
   
    insertAttail(head,12);
    print(head) ;

    insertAtHead(head,20);
    print(head);

    insertAttail(head,30);
    print(head); 

    cout<< "Reversed List " <<endl;
    // reverseList(head);
    reverse(head) ;
    // cout<< temp -> data <<endl; 
    print(head);
    return 0;
}