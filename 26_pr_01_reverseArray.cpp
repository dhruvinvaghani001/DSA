#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &array){
    int i =0;
    int j = array.size()-1 ;
    while( i <= j ){
        swap(array[i],array[j]);
        i++ ;
        j -- ;
    }
}
int main(){

    vector<int> v ;
    v.push_back(10);
    v.push_back(15);
    v.push_back(30);
    v.push_back(17);

    reverse(v);
    
    for(int i : v){
        cout<< i << " ";  
    }
    cout<<endl;
    return 0;
}