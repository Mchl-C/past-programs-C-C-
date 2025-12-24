// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	long long n,m;
	cin >> n >> m;
	ll prev_num = 1;
	ll work = 0;

	for(ll i = 0; i < n;i++){
		ll L,r;
		cin >> L >> r;
		// cout << "prev_num : " << prev_num << endl;

		if(prev_num < L){
			work += abs(prev_num - L);
			prev_num = L;
		}
		else if(prev_num > r){
			work += abs(prev_num - r);
			prev_num = r;
		}
	}
	cout << work << endl;
	return 0;
}
