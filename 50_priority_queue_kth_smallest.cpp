#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int kthsmallest(int a[],int n ,int k){
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        if(pq.top() > a[i]){
            pq.pop();
            pq.push(a[i]);
        }
    }
    return pq.top();
    
}
int main(){

      int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"kth samllest element in array is : "<<kthsmallest(arr,n , 3);
    return 0;
    return 0;
}