// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;cin >> t;
	for(int i = 1;i <= t;i++){
		double n,v,a;
		cin >> n >> v >> a;
		cout << "Case #" << i << ": ";
		cout << fixed << setprecision(1) << "Series " << n * v << " " << a << " | ";
		cout << fixed << setprecision(1) << "Parallel " << v << " " << a * n << endl;
	}
	return 0;
}
