#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

int main() {
	ll t;
	cin >> t;
	ll max_num = 0;
	for(int i = 0;i < t;i++){
		ll num;
		cin >> num;
		max_num = max(max_num, num);
	}
	cout << max_num + 1 << endl;

}
