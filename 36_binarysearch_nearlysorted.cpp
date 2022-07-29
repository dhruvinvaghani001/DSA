#include<iostream>
using namespace std;
int nearlysorted_binarysearch(int a[],int key,int n){
    int low = 0,high = n-1,mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(a[mid]==key) return mid;
        if(a[mid+1]==key && mid<high) return mid+1;
        if(a[mid-1]==key && mid>low) return mid-1;
        
        if(a[mid]<key && mid-1>low){
            low = mid+2;
        }
        if(a[mid]>key && mid+1<high){
            high  = mid-2;
        }

    }
    return -1;
}
int main(){
    int a[] ={5,10,30,20,40};
    cout<<"position of key is :"<<nearlysorted_binarysearch(a,40,5);

    return 0;
}