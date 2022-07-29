#include<iostream>
using namespace std;
int firstoccurance(int a[],int high , int key){
    int low = 0,mid,result=-1;
    while(low<=high){
        mid =  low + (high-low)/2;
        if(a[mid]==key){
            result = mid ;
            high = mid -1;
        }
        else if (a[mid]>key){
            high = mid-1;
        }
        else if (key>a[mid]){
            low = mid+1;
        }
    }
    return result;
}
int lastoccurance(int a[],int high , int key){
    int low = 0,mid,result=-1;
   
    while(low<=high){
        mid =  low + (high-low)/2;
        
        if(a[mid]==key){
            
            result = mid ;
            low = mid +1;
        }
        else if (a[mid]>key){
            high = mid-1;
        }
        else if (key>a[mid]){
            low = mid+1;
        }
    }
    
     return result;
   
}
int main(){

    int a[] = {0,1,2,10,10,10,10,40,50,90};
    cout<<"first ocuurance of key is :"<<firstoccurance(a,9,10)<<endl;
    cout<<"last ocuurance of key is :"<<lastoccurance(a,9,100);

    return 0;
}