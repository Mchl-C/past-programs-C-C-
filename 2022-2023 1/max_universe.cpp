// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, max_num = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		long long num;
		cin >> num;
		max_num = max(num, max_num);
	}
	cout << max_num << endl;

	return 0;
}
