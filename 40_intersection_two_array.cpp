#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int intersectionArray(int arr1[],int m,int arr2[],int n){
    unordered_set<int> ans;
    int count =0;
    for(int i=0;i<m;i++){
        ans.insert(arr1[i]);
    }
    for(int i=0;i<n;i++){
        if(ans.count(arr2[i])){
            count++;
            ans.erase(arr2[i]);
        }
    }
    
    return count;
}
int main(){

    int a[] = {5,10,15,5} , b[] ={10,15,4};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    cout<<"Number of same element in both array is: "<<intersectionArray(a,m,b,n);
    return 0;
}