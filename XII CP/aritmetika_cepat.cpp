// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int sum = 0, num;
	cin >> sum;
	for(int i = 0;i < 6;i++){
		cin >> num;
		sum += abs(num);
	}

	cout << sum << endl;
}
