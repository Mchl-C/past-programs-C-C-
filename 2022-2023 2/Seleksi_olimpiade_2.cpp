// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct interval{
	ll first, second;
};

bool cmp(interval i1, interval i2){
	return i1.first > i2.first;
}

int main() {
	int t; cin >> t;

	while(t --){
		int n,m;
		cin >> n >> m;

		interval scores[n + 10];
		string target, members[n + 10];
		cin >> target;

		for(int i = 0;i < n;i++){
			string s;
			ll a,b,c;
			cin >> s >> a >> b >> c;

			members[i] = s;
			ll score = a + b * 501 + c * 501001;
			scores[i].first = score;
			scores[i].second = i;
		}

		sort(scores, scores + n, cmp);

		bool pass = false;

		for(int i = 0; i < m;i++){
			if(members[scores[i].second] == target){
				pass = true;
				break;
			}
		}

		pass ? cout << "YA\n" : cout << "TIDAK\n";
	}
}
