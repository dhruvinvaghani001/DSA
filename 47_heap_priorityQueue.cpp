#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> pq;
    int a[] ={60,50,40,100,80,30,10 };
    int n = sizeof(a) / sizeof(a[0]); 
    for(int i=0;i<n;i++){
        pq.push(a[i]);
    }
    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
   
    return 0;
}