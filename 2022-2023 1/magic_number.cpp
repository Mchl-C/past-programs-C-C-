// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// ll lim = 1e5 + 10;
	// bool prime[lim] = {false};
	// for(ll i = 2;i * i < lim;i++){
	// 	for(ll x = i;x*i < lim;x++){
	// 		prime[x * i] = true;
	// 	}
	// 	prime[i*i] = false;
	// }

	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		ll num;
		cin >> num;
		ll x = sqrt(num);
		if(x * x == num){
			bool check = true;
			for(ll p = 2;p < x;p++){
				if(num % p == 0){
					check = false;
					break;
				}
			}
			if(check){
				cout << "YES.\n";
			}
			else{
				cout << "NO.\n";
			}
		}
		else{
			cout << "NO.\n";
		}
	}
}
