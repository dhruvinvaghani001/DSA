#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void mergeArrays(int arr1[] , int n1 , int n2 , int arr2[],int arr3[]){
    int i=0,j=0,k=0 ;
    while(i< n1 && j < n2 ){
        if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i < n1 ){
        arr3[k] = arr1[i] ;
        k++;
        i++;
    }
    while(j < n2 ) {
        arr3[k] = arr2[j] ;
        k++;
        j++;
    }
}
int main(){

    int arr1[] = {10, 20, 30, 40};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
  
    int arr2[] = {11, 22, 33, 44};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
  
    int arr3[n1+n2];
    mergeArrays(arr1, n1, n2,arr2, arr3);
  
    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
  
    return 0;
}