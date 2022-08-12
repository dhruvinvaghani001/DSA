#include<iostream>
#include <bits/stdc++.h>
#include "singly_linked_list_function.cpp" 
using namespace std;
int lenOfList(Node* &head){
    int cnt = 0;
    Node* temp = head ;
    while(temp != NULL){
        temp = temp -> next ;
        cnt++;
    }
    return cnt;
}

Node* findMiddle(Node* head){
    int length = lenOfList(head);
    int pos = length/2 +1 ;
    Node* temp = head ;
    int cnt = 1 ;
    while(cnt<pos){
        temp = temp -> next ;
        cnt++ ;
    }
    return temp ;
    
}

//aproach 2 using two pointer

Node* findMiddleOptimize(Node *head){
     if(head==NULL || (head->next ==NULL)){
        return head ;
    }
    else if(head->next->next == NULL){
        return head -> next;
    }
    else{
        Node *slow = head ;
        Node *fast = head -> next ;
        while(fast != NULL){
            fast = fast -> next ;
            if(fast != NULL){
                fast = fast -> next ;
            }
            slow = slow -> next ;
        }
        return slow ;
    }
}

int main(){

    Node* head = NULL ;
    insertAtHead(head,10);
    print(head);

    insertAtHead(head,5); 
    print(head);

    insertAtTailWithOutTail(head,75);
    print(head) ;

    insertAtTailWithOutTail(head,20);
    print(head) ; 
    
    insertAtTailWithOutTail(head,25);
    print(head) ; 
    
    int length = lenOfList(head);
    cout<<length<<endl;
    
    Node* ans = findMiddle(head);
    cout<<ans->data <<endl;


    return 0;
}