// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n, x, min_diff = 300000;
	cin >> n >> x;
	ll nums[n + 10], arr[n + 10];

	for(int i = 0;i < n;i++){
		ll nm; //nilai murni
		cin >> nm;
		nums[i] = nm;
		min_diff = min(min_diff, abs(x - nm));
	}

	int idx = 0;
	for(int i = 0;i < n;i++){
		if(abs(x - nums[i]) == min_diff){
			arr[idx] = nums[i];
			idx ++;
		}
	}

	sort(arr, arr + idx);
	cout << arr[0] << endl;
}
