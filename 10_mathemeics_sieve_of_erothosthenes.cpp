#include<iostream>
using namespace std;

int main(){
    // prime number using  sieve_of_erothosthenes  algoritham
    int n ;
    cout<<"enter a number :";
    cin>>n;
    int bollean[n+1] ;
    
    for (int i = 0; i <= n ; i++)

    {
        bollean[i] = false;
    }
   
    for (int i = 2; i <=n; i++)
    {
        for (int j = 2*i; j <=n; j+=i)
        {
            bollean[j]=true;
        }
        
    }
    for (int  i = 0; i <= n; i++)
    {
        cout<<i<<" "<<bollean[i]<<endl;
    }
    return 0;
}