#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Media{
    public:
        priority_queue<int> maxheap;
        priority_queue<int> minheap;
        void insertnumber(int num){
        if(maxheap.empty() || maxheap.top() >= num){
            maxheap.push(num);
        }
        else{
            minheap.push((-1)*num);
        }
       
        if(maxheap.size() > minheap.size()+1){
            minheap.push((-1)*maxheap.top());
        }
        else if (maxheap.size() < minheap.size()){
            maxheap.push((-1)*minheap.top());
        }
        }
        float findmedian(){
        if(maxheap.size() == minheap.size()){
            return float(maxheap.top()  + (-1)*minheap.top() )/2;
        }
        return maxheap.top();
        }
};
int main(){

    Media myobj;
    myobj.insertnumber(3);
    myobj.insertnumber(50);
    // myobj.insertnumber(2);
    
    cout<<"median is :"<<myobj.findmedian();
    // cout<<"median is :"<<median(a,n);
    return 0;
}