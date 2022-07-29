#include<iostream>
using namespace std;

int main(){
    //factorial count 
    int n,result=1;
    cout<<"enter a number ";
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
        result = result * i;
    }
    cout<<"factorial is :"<<result;
    return 0;
}