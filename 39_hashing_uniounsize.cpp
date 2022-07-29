#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int union_size(int arr1[],int m ,int arr2[],int n){
    unordered_set<int> ans ;
    for(int i=0,j=0;i<m,j<n;i++,j++){
        ans.insert(arr1[i]);
        ans.insert(arr2[i]);

    }
    // for (int i = 0; i < n; i++)
    // {
    //     ans.insert(arr2[i]);
    // }
    int size = ans.size();
    return size;
}
int main(){

    int a[] = {5,10,15,5} , b[] ={10,15,4,2,5};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    cout<<"size of union set is : "<<union_size(a,m,b,n);

    return 0;
}