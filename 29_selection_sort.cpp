#include<iostream>
#include<vector>
using namespace std;
void swap(int a[],int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void selectionSort(int a[] , int n ){
    int i,j,min;
    for (i = 0; i < n-1; i++)
	{
		
		
		min = i;
		for (j = i+1; j < n; j++)
		{
        if (a[j] < a[min])
			min = j;
		// swap(a,min,i);}
        
        if(min != i){
            swap(a,min,i);
        }
        }
    }
}
void printArray(int arr[] , int n ){
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
int main(){

    int a[] = {4,8,5,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    selectionSort(a , n) ;
    printArray(a , n);
    
    
    return 0;
}