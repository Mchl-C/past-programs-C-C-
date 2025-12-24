// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int max_num = max(a, max(b,c));
	int min_num = min(a, min(b,c));
	int x = a + b + c - max_num - min_num;

	if(max_num < x + min_num) cout << 0 << endl;
	else cout << max_num - x - min_num + 1 << endl;
}
