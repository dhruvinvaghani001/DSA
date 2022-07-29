#include<iostream>
using namespace std;
int numberOfRotation(int a[],int high,int n){
    int low = 0,mid;
    while(low<=high){
        mid = low + (high-low)/2;
        int pre = (mid-1+n)%n ;
        int next = (mid+1)%n;
        if(a[mid]<=pre && a[mid]<=next){
            return mid;
        }
        else if (a[mid] <= a[high])
            high = mid - 1;
        else if (a[mid] >= a[low])
            low = mid + 1;
    }
    return 0;
}
int main(){
   
    int a[]={11,12,15,18,2,5,6,8};
    cout<<"Number of rotation :"<<numberOfRotation(a,7,8);
    return 0;
}