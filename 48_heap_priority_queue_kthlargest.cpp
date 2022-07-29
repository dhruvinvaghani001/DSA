#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int kthlargest(int a[],int n,int k){
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push((-1)*a[i]);
    }
    for(int i=k;i<n;i++){
        if(pq.top() < a[i]){
            pq.pop();
            pq.push((-1)*a[i]);
        }
    }
    return (-1)*pq.top();
}
int main(){
  
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"kth largest element in array is : "<<kthlargest(arr,n , 2);
    return 0;
}