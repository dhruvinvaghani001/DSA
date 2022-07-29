#include<iostream>
using namespace std;

int main(){
    //to find ithrd position bit of the number 
    int n=5;
    int i=2;
    int mask = 1<<i;
    int result = n &mask;
    if(result == 0){
        cout<<"3rd bit is zero";
    }
    else{
        cout<<"3rd bit is one";
    }

    return 0;
}