// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main() {
	fastio
	int m,n;
	cin >> n >> m;
	vector <int> v;
	for(int i = 0;i < n;i++){
		int num;
		cin >> num;
		v.pb(num);
	}

	sort(v.begin(), v.end());
	int displace = v[n - 1] - v[0];

	for(int i = 1; i < n;i++){
		displace = min(displace, m + v[i - 1] - v[i]);
	}

	cout << displace << endl;
}
