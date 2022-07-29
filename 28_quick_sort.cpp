#include<iostream>


using namespace std;
void swap(int a[],int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int partition(int number[] ,int l, int r){
    // int l =0;
    // int r = number.size();
    
    int pivot = number[l];
    int i = l;
    int j = r;
   
    while (i<j)
    {
         while(number[i]<=pivot) i++;
         while(number[j]>pivot) j--;
         
         if(i<j){
            swap(number,i,j);
         }
    }
    swap(number,j,l);
    return j;
}
void quicksort(int n[],int l, int r){
    if(l<r){
        int pivot = partition(n,l,r);
        quicksort(n,l,pivot-1);
        quicksort(n,pivot+1,r);
    }
}
int main(){

    int  number[] ={8,1,6,2,10,3};
     quicksort(number,0,5);
    for (int i = 0; i < 6; i++)
    {
       cout<<number[i]<<" ";
    }
    
    return 0;
}