// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int>& a, pair<string, int>& b){
	return a.second > b.second;
}

int main() {
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		vector < pair<string, int>> v;

		int n,m;
		cin >> n >> m;

		string chosen;
		cin >> chosen;

		for(int j = 0;j < n;j++){
			string name;
			int a,b,c, total_score;
			cin >> name >> a >> b >> c;

			total_score = c * 501001 + b * 501 + a;
			v.push_back({name, total_score});

			// cout << "Name : " << name << " , score : " << total_score << endl;
		}

		sort(v.begin(), v.end(), cmp);

		bool pass = false;
		int cn = 0;
		for(auto it : v){
			if(cn >= m){
				break;
			}
			if(it.first == chosen){
				pass = true;
				break;
			}

			cn ++;
		}

		if(pass){
			cout << "YA\n";
		}
		else{
			cout << "TIDAK\n";
		}
	}
}
