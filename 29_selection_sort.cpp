#include<iostream>
#include<vector>
using namespace std;
void swap(int a[],int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main(){
    int i,j,min;
    int a[] = {4,8,5,1,0};
    int n = 5;
    for (i = 0; i < n-1; i++)
	{
		
		
		min = i;
		for (j = i+1; j < n; j++)
		if (a[j] < a[min])
			min = j;

	
		swap(a,min,i);
	}
    for(int k=0;k<5;k++){
        cout<<a[k]<<" ";
    }
    return 0;
}