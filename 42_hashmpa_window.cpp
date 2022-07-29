#include <iostream>
#include <unordered_map>
using namespace std;

void countDistinct(int arr[], int k, int n)
{

	unordered_map<int, int> hm;
  int dist_count = 0;
	for (int i = 0; i < k; i++) {
		if (hm[arr[i]] == 0) {
			dist_count++;
		}
		hm[arr[i]] ++;
	}
  cout << dist_count << endl;

	
	for (int i = k; i < n; i++) {
    if (hm[arr[i - k]] == 1) {
			dist_count--;
		}
		hm[arr[i - k]] -= 1;
    
    if (hm[arr[i]] == 0) {
			dist_count++;
		}
		hm[arr[i]]++;

		
		cout << dist_count << endl;
	}
}

int main()
{
	int arr[] = { 1, 2, 2, 1, 3, 1, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int k = 4;
	countDistinct(arr, k, size);

	return 0;
}
// This solution is contributed by Aditya Goel
