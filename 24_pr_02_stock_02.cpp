#include<iostream>
using namespace std;
void maxprofit(int arr[],int n){
    int profit =0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[i-1]){
            profit = profit + (arr[i] -arr[i-1]);
        }
    }
    cout<<profit;
}
int main(){
    int a[]={5,2,7,3,6,1,2,4};
    maxprofit(a,8);

    return 0;
}