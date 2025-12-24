// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n,k,x;
	cin >> n >> k >> x;
	(n * k >= abs(x)) ? cout << "YA\n" : cout << "TIDAK\n";
}
