#include<iostream>
using namespace std;
int isplindrome(string str,int l,int r){
    if(l>=r){
        return true;
    }
    if(str[l]!=str[r]){
        return false;
    }
    return isplindrome(str,l+1,r-1);
}
int main(){
    //to chekc given string is palindrome or not 
    string str;
    cout<<"enter a string :";
    cin>>str;
    int c=str.length();
    cout<<isplindrome(str,0,3);
    if(isplindrome(str,0,c)==1){
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome ";
    }
    return 0;
}