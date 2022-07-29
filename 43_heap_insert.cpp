#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[],int i ,int j){
    int temp;
    temp = arr[i];
    arr[i] = j;
    j = temp;
}
void insert(int arr[],int n,int k){
    n = n+1;
    arr[n-1] = k;
    int i = n-1;
    
    while(i>1){
        
        int parent = (i-1)/2;
        
        if(arr[i]>arr[parent]){
            swap(arr,parent,i);
            i = parent ;
        }
        else{
            break ;
        }
    }
    
}
int main(){

    int a[] = {8,5,4,3};
    int size = sizeof(a) / sizeof(a[0]);
    int k =15;
    insert(a,size,k);
    
   
    
    return 0;
}