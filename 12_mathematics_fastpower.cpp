#include<iostream>
using namespace std;
int fastPower(int a , int b){
    int res =1;
    while (b>0)
    {
        if((b&1) != 0){
        res = res * a;
        }
        a = a*a;
        b = b>>1;
    }
    return res ;
}
int main(){
    int n,n1 ;
    cout<<"enter a number:";
    cin>>n>>n1;
    cout<<fastPower(n,n1);


    return 0;
}