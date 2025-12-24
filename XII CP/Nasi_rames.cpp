// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k, a, b;
	cin >> n >> m >> k >> a >> b;

	int a1 = a/(2*k);
	int b1 = b/k;
	int max_set = n / (3*m);
	cout << min(min(a1, b1), max_set) * 3 << endl;
}
