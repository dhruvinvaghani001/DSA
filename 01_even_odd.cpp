#include<iostream>
using namespace std;

int main(){
    
    int n; 
    cout<<"enter a number :";
    cin>>n;
    
    if((n & 1)==0){
        cout<<"number "<<n<<" is even";
    }
    else{
        cout<<"number "<<n<<" is odd";
    }
    return 0;
}