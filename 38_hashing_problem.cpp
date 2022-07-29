#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int countDistinctnumber(int arr[] , int n ){
    unordered_set<int> ans;
    for(int i=0;i<n;i++){
        ans.insert(arr[i]);
    }
    int size_set = ans.size();
    return size_set;
}
int main(){

    int a[] = {5,5,4,3,4,8,9};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"number of distinct element is :"<<countDistinctnumber(a,n);
    return 0;
}