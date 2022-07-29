#include<iostream>
using namespace std;

int main(){
    //to set bit at the ith position
    int n=5,i=1;
    int mask = 1<<i;
    int result = n | mask;
    cout<<result;
    return 0;
}
