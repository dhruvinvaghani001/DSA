#include<iostream>
using namespace std;

void mergesort(int a[],int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,r,mid);
    }
}
int main(){
   
    int a[] = {4,2,3,5,9,7};
    mergesort(a,0,5);
    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}