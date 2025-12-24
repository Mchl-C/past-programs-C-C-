// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n, k, total = 0;
	cin >> n >> k;

	ll max_num = 0, floor = 0;
	for(ll i = 0;i < n;i++){
		ll num;
		cin >> num;
		max_num = max(num, max_num);
		if((i + 1) % k == 0){
			total += max_num;
			// cout << "Floor #" << floor + 1 << " : " << max_num << " , total : " << total << endl;
			max_num = 0;
			floor ++;
		}
		else{
			if(i == n-1){
				total += max_num;
				// cout << "Floor #" << floor + 1 << " : " << max_num << " , total : " << total << endl;
				max_num = 0;
				floor ++;
			}
		}
	}

	total += 2;
	if(floor > 1){
		total += floor - 1;
	}

	cout << total << endl;
}
