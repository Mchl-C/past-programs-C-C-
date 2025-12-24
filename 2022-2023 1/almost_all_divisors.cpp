// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	ll gcd = 0;
	cin >> t;

	for(ll i = 0;i < t;i++){
		ll n;
		cin >> n;
		ll arr[n + 10];
		for(ll p = 0;p < n;p++){
			cin >> arr[p];
		}
		bool found = false;
		sort(arr, arr + n);

		ll num = arr[0] * arr[n - 1];

		// cout << "arr awal : " << arr[0] << " " << arr[n - 1] << " " << num << endl;

		ll pembagi = n/2;
		if(n % 2 == 1){
			pembagi ++;
		}

		for(ll p = 1;p < pembagi;p++){
			ll res = arr[p] * arr[n - p - 1];
			// cout << "arr : " << arr[p] << " " << arr[n - p - 1] << " " << res << endl;
			if(res != num){
				found = true;
			}
		}
		// cout << endl;

		if(found){
			cout << -1 << endl;
		}
		else{
			ll factors = 0;
			for(ll i = 2; i*i <= num;i++){
				if(num % i == 0){
					factors ++;
					if(num/i != i){
						factors ++;
					}
				}
			}
			// cout << "factors : " << factors << endl;
			if(factors == n){
				cout << num << endl;
			}
			else{
				cout << -1 << endl;
			}
		}
	}
}
