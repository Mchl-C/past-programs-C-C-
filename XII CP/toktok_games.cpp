// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin >> n;

	ll arr[n + 10], ar[n + 10];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);
	ar[0] = arr[0];

	for(int x = 1;x < n;x++){
		ar[x] = ar[x - 1] + arr[x];
		// cout << ar[x] << endl;
	}

	ll power = 0;
	for(int i = 1;i < n;i++){
		power = max(power, arr[i] - ar[i - 1]);
	}

	if(power == 1) cout << arr[0] + 1 << endl;
	else if(power < arr[0]) cout << arr[0] + 1 << endl;
	else if(power >= arr[0]) cout << power + 1 << endl;
}
