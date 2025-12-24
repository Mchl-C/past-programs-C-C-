// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n,x,y,p;
	cin >> n >> x >> y >> p;

	ll a = max(x, y) + n;
	ll b = min(x, y) - n;
	if(b < 0) b = 0;

	if(a == p || b == p) cout << "YA\n";
	else cout << "TIDAK\n";

}
