// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

bool cpr(pair<int,int> a, pair<int,int> b){
	return a.first > b.first;
}

int main() {
	int n,x,y;
	vector<int> v, v1;
	vector<pair<int, int>> v2;
	int tot = 0;
	cin >> n >> x >> y;

	for(int i = 0;i < n;i++){
		int num; cin >> num;
		v.emplace_back(num);
	}

	for(int i = 0;i < n;i++){
		int num; cin >> num;
		v1.emplace_back(num);
	}

	for(int i = 0;i < n;i++){
		if(v[i] >= x && v1[i] >= y) tot ++;
		else v2.push_back({v[i], v1[i]});
	}

	sort(v2.begin(), v2.end(), cpr);
	// for(int i = 0;i < v2.size();i++){
	// 	cout << v2[i].first << " " << v2[i].second << endl;
	// }

	bool found = false;
	for(int i = 0;i < v2.size();i++){
		if(found) break;
		for(int j = i + 1;j < v2.size();j++){
			if((v2[i].first + v2[j].first >= x)&& (v2[i].second + v2[j].second >= y)){
				tot ++;
				found = true;
				break;
			}
		}
	}

	cout << tot << endl;
	return 0;
}
