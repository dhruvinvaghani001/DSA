#include<iostream>
using namespace std;
void majorityelemt(int a[],int size){
    int ansindex=0;
    int count =1;
    for(int i=1;i<size;i++){
        
        if(a[i]==a[ansindex]){
            count ++;
        }
        else{
            count--;
        }
    
        if(count ==0){
            ansindex =i;
            count = 1;
        }
    }
   int ans =0;
    for (int  i = 0; i < size; i++)
    {
        if(a[ansindex]==a[i]){
            ans++;
        }
    }
    if(ans>(size/2)){
        cout<<a[ansindex];
    }
    else{
        cout<<"no elemnt in array are moajority"<<endl;
    }

    
}



int main(){
    // boore-moore voting alogitham to find majority element in array 
    int a[] = {3,3,2,1,4,3,3,3,3};
    // cout<<"hello";
    cout<<"majaority elemt is :";
    majorityelemt(a,9);
    return 0;
}