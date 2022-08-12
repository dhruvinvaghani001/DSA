#include<iostream>
#include <bits/stdc++.h>
#include "singly_linked_list_function.cpp"
using namespace std;

void recursiveReverse(Node* &head,Node *curr, Node* prev){
    if(curr == NULL){
        head = prev ; 
        return ;
    }
    Node * forward = curr -> next ;
    recursiveReverse(head,forward,curr);
    curr -> next = prev ; 
}


//Approach - 1 
void reverseList(Node* &head){
    
    Node *curr = head ;
    Node *prev = NULL ;
    recursiveReverse(head,curr,prev);
    
    
    // approach 1
    // head = prev ;

    // Node* prev = NULL ;
    // Node *curr = head ;
    // Node* forward;
    // while(curr != NULL){
    //     forward = curr->next ;
    //     curr->next = prev ;
    //     prev = curr ;
    //     curr = forward ;
    // }
    // head = prev ; 

}

//approach -3 

Node* reverse(Node* &head){
    if(head == NULL || (head->next ==  NULL)){
        return head ;
    }
    Node * chotahead = reverse( head -> next ) ;
   
    head -> next -> next = head ;
    head -> next = NULL ;

    return chotahead ; 

}



int main(){

    Node* head = NULL ;

    insertAtHead(head,10);
    print(head) ;
   
    insertAtTailWithOutTail(head,12);
    print(head) ;

    insertAtHead(head,20);
    print(head);

    insertAtPosition(head,3,30);
    print(head); 

    cout<< "Reversed List " <<endl;
    // reverseList(head);
    Node * temp = reverse(head) ;
    cout<< temp -> data <<endl; 
    print(temp);
    return 0;
}