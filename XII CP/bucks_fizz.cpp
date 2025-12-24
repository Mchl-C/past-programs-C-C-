// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll a,b,c;
	cin >> a >> b >> c;
	cout << min(min(a,b), c) << endl;
	return 0;
}
