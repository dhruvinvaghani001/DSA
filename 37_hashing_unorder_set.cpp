#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    unordered_set<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(9);
    s.insert(9);

    s.insert(15);

    if(s.find(10)==s.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }

    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
         cout<<(*itr)<<endl;
    }
    cout<<"size of unordered set :"<<s.size()<<endl;
    
    cout<<"count of elemrnt is :"<<s.count(9)<<endl;
    
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
         cout<<(*itr)<<endl;
    }
    return 0;
}