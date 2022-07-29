#include <bits/stdc++.h>

using namespace std;

int minCost(int arr[], int n)
{

	priority_queue<int> pq;
	for(int i=0;i<n;i++){
        pq.push((-1)*arr[i]);
    }
	
	int res = 0;

	while (pq.size() > 1) {
		int first = (-1)*pq.top();
		pq.pop();
		int second = (-1)*pq.top();
		pq.pop();

		
		res += first + second;
		pq.push((-1)*(first + second));
	}

	return res;
}

int main()
{
	int len[] = {90,102,360,690 };
	int size = sizeof(len) / sizeof(len[0]);
	cout << "Total cost for connecting ropes is " << minCost(len, size);
	return 0;
}
