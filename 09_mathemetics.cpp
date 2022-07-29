#include<iostream>
using namespace std;

int main(){
    //palindrone number 
    int n,original,reminder,result=0 ;
    cout<<"enter n :";
    cin>>n;
    original =n;
    while(n !=0){
        reminder = n %10;
        result = result *10 + reminder;
        n = n/10;
    }
    if(result == original){
        cout<<"given number is palindrome";

    }
    else{
        cout<<"number is not a palindrome ";
    }
    return 0;
}