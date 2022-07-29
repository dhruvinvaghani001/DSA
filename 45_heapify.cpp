#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void heapify(int a[],int n , int i){
   
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && a[left]>a[largest]){
        largest = left;
    }
    if(right<n && a[right]>a[largest]){
        largest = right;
    }
    if(largest != i){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
    
}
int main(){
   
    int a[] = {60,50,40,100,80,30,10 };
    int n = sizeof(a)/sizeof(a[0]);
    for (int i = n / 2 - 1; i >= 0; i--){
        heapify(a, n, i);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    
 
    return 0;
}