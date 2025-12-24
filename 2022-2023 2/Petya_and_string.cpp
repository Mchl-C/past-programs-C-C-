// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int lower(string s){
	int sum = 0;
	for(char ch : s){
		if(ch >= 65 && ch <= 90) ch += 32;
		sum += ch;
	}
	return sum;
}

int main() {
	string a, b;
	cin >> a;
	cin >> b;

	int first = lower(a); int second = lower(b);
	if(first == second) cout << 0 << endl;
	else if(first > second) cout << 1 << endl;
	else cout << -1 << endl;
}
