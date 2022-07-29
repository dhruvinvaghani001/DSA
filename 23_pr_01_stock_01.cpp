#include<iostream>
#include<math.h>
using namespace std;
void bestprofit(int a[],int n){
    int maxprofit=0;
    int minsofar=a[0];

    for (int i = 0; i < n; i++)
    {
        minsofar = min(minsofar,a[i]);
        maxprofit = max(maxprofit,a[i]-minsofar);
    }
    cout<< maxprofit;
}
int main(){
    int a[]={1,2,3,7,8,9,1};
    bestprofit(a,7);

    return 0;
}