// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll limit = 1000000007;

ll count(ll num, ll pow){
	if(pow == 0){
		return 1;
	}
	if(pow == 1){
		return num;
	}

	if(pow % 2 == 1){
		return (num * count(num, pow - 1)) % limit;
	}
	else{
		return (count(num, pow/2) * count(num, pow/2)) % limit;
	}
}

int main() {
	ll x,n;
	cin >> x >> n;
	cout << count(x, n) % limit;
}
