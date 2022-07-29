#include<iostream>
using namespace std;
void maxsumofsubarray(int a[],int n){
    int maxsum=0;
    int cursum =0;
    for(int i=0;i<n;i++){
        cursum = cursum + a[i];
        if(cursum>maxsum){
            maxsum = cursum;
        }
        if(cursum<0){
            cursum =0;
        }
        
    }
    cout<<maxsum;
}
int main(){
    //kaden's algoritham to find maximum sum of subarray
    int a[] = {-5,4,6,-3,4,-1};
    maxsumofsubarray(a,5);
    return 0;
}