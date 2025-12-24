// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(n) for(int i = n; i > 0;i--)

void print_v(vector<int> v){for(int p : v) cout << p << ' ';}

int score_min(int l, int r, int m, vector<int> v, vector<int> dp){
	// int m = (l + r)/2;
	if(l >= r) return 0;
	// cout << l << ' ' << m << " " << r << endl;
	// cout << dp[m] - dp[l - 1] << " " << (dp[r] - dp[m]) << endl;
	int sum = abs(dp[m] - dp[l - 1] - (dp[r] - dp[m]));
	// cout << "Sum " << sum << endl;
	return sum + score_min(l, m, (l + m)/2, v, dp) + score_min(m + 1, r,(r + m)/2, v, dp);
}

int score_max(vector<int> v, vector<int> dp, int n){
	int tot = 0;
	loop(n - 1) tot += v[i] * i;
	tot -= dp[n - 2];
	return tot;
}

int main() {
	int t; cin >> t;
	for(int m = 1;m <= t;m++){
		int n; cin >> n;
		vector <int> v; vector <int> dp;

		int num; cin >> num;
		v.push_back(num);
		dp.push_back(num);

		for(int i = 1;i < n;i++){
			cin >> num;
			v.push_back(num);
			dp.push_back(dp[i - 1] + num);
		}

		int avg = dp[n - 1] / n;
		auto upper = upper_bound(v.begin(), v.end(), avg);
		auto lower = lower_bound(v.begin(), v.end(), avg);
		int idx = upper - v.begin();
		int idx2 = lower - v.begin();

		if(idx >= n - 1) idx = n - 2;
		if(idx2 <= 0) idx2 = 1;
		// cout << avg << " " << idx << " " << idx2 << endl;

		int min_1 = score_min(0, n - 1, idx, v, dp);
		int min_2 = score_min(0, n - 1, idx2, v, dp);
		// cout << "min_1 : " << min_1 << endl;
		// cout << "min_2 : " << min_2 << endl;

		cout << "Case #" << m << ": ";
		cout << min(min_1, min_2) << " " << score_max(v, dp, n) << endl;

	}
	//print_v(dp);
	return 0;
}
