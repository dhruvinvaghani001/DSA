#include<iostream>
using namespace std;

int main(){
    //to clear at ith bit in the number 
    int n=5,i=2;
    int mask = ~(1<<i);
    int result = n & mask;
    cout<<result;
    return 0;
}