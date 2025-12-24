// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	bool sieve[10500];
	memset(sieve, 1, 10500);
	sieve[0] = false;
	sieve[1] = false;

	for(int i = 2;i*i <= 10500;i++){
		for(int x = i;x*i < 10500;x++){
			sieve[x*i] = false;
		}
	}

	ll n;
	cin >> n;
	for(int i = 0;i < n;i++){
		ll a,b;
		cin >> a >> b;

		bool found = false;
		for(int s = b;s >= a;s--){
			if(sieve[s]){
				found = true;
				cout << s << endl;
				break;
			}
		}
		if(!found){cout << -1 << endl;}
	}
}
