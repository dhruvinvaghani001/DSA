#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int s,int e,int key){
    while(s<=e){
        int mid = s + (e-s)/2 ;
        if(arr[mid] == key){
            return mid ;
        }
        else if ( arr[mid] > key ){
            e = mid -1 ;
        }
        else {
             s = mid + 1; 
        }

    }
    return -1 ;

}
int getPivot(int arr[],int n ){
    int s =0;
    int e = n-1;
    while(s<e){
        int mid =  s + (e-s)/2 ;
        if(arr[mid]>arr[0]){
            s = mid+1;
        }
        else{
            e = mid ;
        }
    }
    return s;
}
int  searchInRotatedArray(int arr[] ,int n ,int key){
    int index = getPivot(arr,n);
    if( key >= arr[index] &&  key <= arr[n-1]){
        return binarySearch(arr,index,n,key);
    }
    else{
        return binarySearch(arr,0,index-1,key);
    }
}
int main(){
   
    int a [] = {8,9,10,17,1,4};
    int n = sizeof(a) / sizeof(a[0]) ;
    cout << "pivot element present at :" << getPivot(a,n) << endl ;
    cout<<"element in  roatted array : "<<searchInRotatedArray(a,n,10);

    return 0;
}