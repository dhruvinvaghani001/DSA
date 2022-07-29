#include <iostream>
using namespace std;
string swap(string s,int l,int i){
   char temp ;
   temp =s[l];
   s[l] = s[i];
   s[i]=temp;
   return s;
}

// Function to print permutations of string
void permute(string a, int l, int r)
{
	if (l == r)
		cout<<a<<endl;
    else
	{
		for (int i = l; i <= r; i++)
		{
            a = swap(a, l,i);
            permute(a, l+1, r);
			a=swap(a, l,i);
        }
	}
}
int main()
{
	string str = "abc";
	int n = str.size();
	permute(str, 0, n-1);
	return 0;
}
