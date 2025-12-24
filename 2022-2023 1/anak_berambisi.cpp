#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, min_num = 1000000;
	cin >> n;
	for(int i = 0;i < n;i++){
		int num;
		cin >> num;
		min_num = min(min_num, abs(num));
	}
	cout << min_num << endl;
}
