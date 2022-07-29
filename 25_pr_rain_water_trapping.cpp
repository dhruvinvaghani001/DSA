#include<iostream>
using namespace std;
void raintrape(int a[],int n){
    int right[n],left[n];
    left[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i-1],a[i]);
    }
    right[n-1]=a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        right[i] = max(right[i+1],a[i]);
    }
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + (min(left[i],right[i]) - a[i]);
    }
    cout<<ans;
    
    
} 
int main(){

    int a[] = {3,2,0,4,3,5,1,2};
    raintrape(a,8);
    return 0;
}