#include<iostream>
using namespace std;
int numberOfPath(int n , int m){
    if(n==1 || m==1) return 1;
    return numberOfPath(n-1,m) + numberOfPath(n,m-1);
}
int main(){
    //if there is a matrx of n x m them ways to reach opposite corner of it 
    int n,m;
    cout<<"n: and m :";
    cin>>n>>m;
    cout<<numberOfPath(n,m);
    return 0;
}