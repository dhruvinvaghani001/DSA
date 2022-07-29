#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int getelemnt(int a[],int high,int key){
    int low=0,mid;
    while(low<=high){
        mid = low + (high-low)/2 ;
        if(a[mid]==key) return a[mid];
        else if (key>a[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    int ac = a[high] -key;
    int bc = a[low] -key;
    if(abs(ac) > abs(bc)){
        return a[low];
    }
    else{
        return a[high];
    }
    
    
   
}
int main(){
    //to make diffrence of key and elemt is minimum
    int a[] ={1,3,5,8,10,15};
    cout<<"element is :"<<getelemnt(a,5,12);
    
    return 0;
}