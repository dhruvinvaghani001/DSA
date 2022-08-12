#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int findelement_mountain(int arr[],int n ){
    int start = 0 ;
    int end = n -1;
    while(start<end){
        int mid = start + (end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start = mid +1 ;
        }
        else{
            end = mid ;
        }
    }
    return start;
}
int main(){
 
    int arr[] = {1,2,3,5,4,3,1};
    int size = sizeof(arr) /sizeof(arr[0]);
    cout<<"mountain element is present at :"<< findelement_mountain(arr,size);
    return 0;
}