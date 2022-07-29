#include<iostream>
using namespace std;

int main(){
    //how many bits we have to flip to convert number from a to b

    int a=5,b=1;
    int result = a^b;
    int i=0;
    while (result >0){
        result = result & (result-1);
        i++;
    }
    cout<<"we have to flip "<<i<<" times to convert number a to b";
    return 0;
}