// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin >> t;
	while(t --){
		ll n, diff;
		cin >> n >> diff;
		ll arr[n + 10];
		for(ll i = 0;i < n;i++){
			cin >> arr[i];
		}
		sort(arr, arr + n);

		ll max_size = 0;
		ll end = 1;
		ll size = 1;

		for(ll i = 0; i < n - 1;i++){
			if(arr[end] - arr[end - 1] <= diff){
				size ++;
				end ++;
			}
			else{
				size = 1;
				end ++;
			}
			max_size = max(max_size, size);
		}

		if(n == 1){
			max_size = 1;
		}

		cout << n - max_size << endl;
	}
}
