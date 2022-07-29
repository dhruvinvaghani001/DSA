#include<iostream>
using namespace std;
int binarysearch(int a[],int key,int n){
    int low =0,mid;
    int high = n-1;
    while(low<=high){
        mid = low + (high-low)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int a[] = {1,3,6,9,10,14};
    cout<<"key is present at :"<<binarysearch(a,3,6);

    return 0;
}