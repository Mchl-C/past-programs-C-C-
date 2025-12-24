#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll lim = 1e9 + 7;
int main() {
	ll t;
	cin >> t;
	while(t --){
		ll num, a = 0, b = 1;
		cin >> num;
		if(num == 0) {cout << 0 << endl; continue;}
		for(ll i = 1;i < num;i++){
			ll c = (a + b) % lim;
			a = b;
			b = c;
		}
		cout << b << endl;
	}
}
