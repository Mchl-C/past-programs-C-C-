// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b;
	cin >> a >> b;
	cout << max(a,b) - min(a,b) << endl;
}
