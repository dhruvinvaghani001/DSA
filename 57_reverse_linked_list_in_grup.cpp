#include<iostream>
#include <bits/stdc++.h>
#include "singly_linked_list_function.cpp"
using namespace std;

Node* reverseIngrup(Node* &head,int k){
    //base case
    if(head == NULL){
        return head ;
    }
    //first k node reverse 
    Node* prev = NULL ;
    Node *curr = head ;
    Node* forward;
    int cnt = 0 ;
    while(curr!= NULL && cnt < k){
        forward = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = forward ;
        cnt++;
    }
    
    //recursion handle further 
    if(forward!= NULL){
        Node* chotahead =  reverseIngrup(forward, k);
        head -> next = chotahead ;
    }
    
    //return prev for head of reversed linked list 
    return prev ;
    
   

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

    insertAtHead(head,25);
    print(head);

    cout<< "Reversed List " <<endl;
    // reverseList(head);
    Node * temp = reverseIngrup(head,3) ;
    
    print(temp);
    return 0;
    
}