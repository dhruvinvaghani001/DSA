#include<iostream>
using namespace std;
int gcd(int a,int b){
     if(b==0) return a;
     gcd(b,a%b);
}
int main(){

    int n ,n1;
    cout<<"enter a number :";
    cin>>n>>n1;
    cout<<gcd(n,n1);
    return 0;
}