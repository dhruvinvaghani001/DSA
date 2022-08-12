#include<iostream>
using namespace std;
int binarysearchRotated(int a[],int high,int key){
    int low =0,mid;
    while (low<=high)
    {
        
        mid = low + (high-low)/2;
        if(a[mid]==key) return mid;
        if(a[mid]>a[low]){
           
            if(key>=a[low] && key<a[mid]){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        else{
            if(key>a[low] && key<=a[mid]){
               
                low = mid +1;
            }
            else{
                 high = mid-1;
            }
        }
    }
    return -1;
    

}
int main(){
    //write code to find key present in roatted sorted array
     int a[] ={20,30,40,50,60,5,10};
     cout<<"key is present at :"<<binarysearchRotated(a,6,30);

    return 0;
}