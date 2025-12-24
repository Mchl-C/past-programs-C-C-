// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
ll l = 0, r = 1e18;

void print_v(vector<int> v){
	for(int i : v){
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	fastio
	ll n, m, sm = 1e18;
	vector <int> v;
	cin >> n >> m;

	for(int i = 0;i < n;i++){
		ll num;
		cin >> num;
		sm = min(sm, num);
		v.pb(num);
	}

	ll mid = 0;
	while(l <= r){
		mid = (l + r)/2;
		ll res = 0;
		for(int i = 0;i < n;i++){
			res += mid / v[i];
		}

		cout << res << " " << l << " " << r << endl;
		if(res == m){
			break;
		}
		else if(res > m){
			r = mid - 1;
		}
		else if(res < m){
			l = mid + 1;
		}
	}

	ll cnt = 0;
	for(int i = mid - sm;i < mid + sm;i++){
		ll res = 0;
		for(int x = 0;x < n;x++){
			res += i / v[x];
		}
		if(res == m){
			cnt ++;
		}
	}
	cout << cnt << endl;
}

