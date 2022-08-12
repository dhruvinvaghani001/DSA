#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[],int n ,int k , int mid ){
     
     int student = 1 ,sum =0;
     for(int i=0;i<n;i++){
        
        if(sum + arr[i] > mid ){
            student++;
            sum = arr[i] ;
        }else{
            sum += arr[i] ;
        }      
     }
     return student<=k;
}
int getMaximumPagesReadByMinimum(int arr[],int n , int k ){
    int start = *max_element(arr,arr+n);
    int end = accumulate(arr, arr+n, 0);
    int result =0 ;
    while(start<=end){
       int  mid = start + (end - start)/2 ;
        if(isPossible(arr,n,k,mid)){
            result = mid ;
            end = mid -1 ;
        }
        else{
            start = mid +1 ;
        }
    }
    return start ;
}

int main(){

    int arr[] = {10,20,30,40};
    int n = sizeof(arr) / sizeof(arr[0]) ;
    cout<<"mimum page read by mximum page read : "<<getMaximumPagesReadByMinimum(arr,n,2);
    int a =10,b =20 ;
    return 0;
}