#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n =4;
    for (int i = 1; i <=n; i++)
    {
        int space = n -i+1;
        for (int j = 1; j <=space ; j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i >=1; i--)
    {
        int space = n -i+1;
        for (int j = 1; j <=space ; j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}