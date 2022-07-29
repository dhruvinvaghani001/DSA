#include<iostream>
using namespace std;
int winner(int n,int k){
    if(n==1) return 1;
    return (winner(n-1,k) + k-1) % n+1;
}
int main(){
    //joseph problem 
    int n,k;
    cout<<"n: and k:";
    cin>>n>>k;
    cout<<winner(n,k);
    return 0;
}