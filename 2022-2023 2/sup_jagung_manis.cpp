// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;

	cin >> a >> b;
	a % b == 0 ? cout << "YA" << endl : cout << "TIDAK" << endl;

	return 0;
}
