// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll lim = 1e9;

int main() {
	ll n,m;

	while(cin >> n >> m){
		ll tot = 1;
		for(ll i = n;i > n - m;i--){
			tot = tot * i;
			while(tot % 10 == 0 && tot > 0){
				tot /= 10;
			}
			tot %= lim;
			// cout << num << " = " << tot << endl;
		}
		cout << tot % 10 << endl;
	}
	return 0;
}
