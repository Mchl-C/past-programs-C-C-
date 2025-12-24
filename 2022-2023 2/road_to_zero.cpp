// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin >> t;

	for(int i = 0;i < t;i++){
		ll tot = 0;
		ll x,y;
		cin >> x >> y;

		ll a,b;
		cin >> a >> b;

		if(2*a <= b || a*b < 0){
			tot = (abs(x) + abs(y)) * a;
		}
		else{
			tot = min(x,y) * b + abs(x - y) * a;
		}

		cout << tot << endl;
	}
}
