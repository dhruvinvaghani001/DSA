#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    a = a ^ b;
    b= a ^ b;
    a= a ^ b;
    cout<<"after swapiing a: "<<a<<" and b is : "<<b;
    return 0;
}