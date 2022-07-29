#include<iostream>
using namespace std;
void swap(int a[],int n , int k){
    int temp;
    temp = a[k];
    a[k] = a[n];
    a[n] = temp;

}


int main(){
    int a[] = {5,1,6,2,10,9};
   
    
    for (int i = 0; i < 6; i++)
    {
        bool swapped = false;
        for (int j = 0; j < 6-i-1; j++)
        {
            if(a[j+1]<a[j]){
                swapped = true;
               
                swap(a,j+1,j);

            }

        }
        if(!swapped){
            break;
        }
        
    }
   
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}