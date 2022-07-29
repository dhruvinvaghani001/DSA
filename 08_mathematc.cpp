#include<iostream>
using namespace std;


int main(){
    // how many number at the end of the factorial of number 
    int n, result=0;
    cout<<"enter a number ";
    cin>>n;
    
    for (int i = 5; i <=n; i=i*5)
    {
        result = result + n/i;
    }
    cout<<"trailing zeros in the "<<n<<"is"<<result;
    return 0;
}