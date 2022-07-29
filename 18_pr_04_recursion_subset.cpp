#include<iostream>
using namespace std;
void powerSet(string str, int index = 0,string curr = "")
{
    int n = str.length();
    if (index == n){
    cout << curr << "\n";
        return;
    }
   powerSet(str,index+1,curr+str[index]);
   powerSet(str,index+1,curr);
   return;
}
int main(){
   string str = "abc";
    powerSet(str);
    return 0;
}