// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool sort_second(const pair<int,int> &a, const pair<int,int> &b){
    return a.second < b.second;
}

int main() {
	int n,m,k;
	cin >> n >> m >> k;
	vector <pair<int, int>> v;

	for(int i = 0;i < n;i++){
		for(int x = 0;x < m;x++){
			int num;
			cin >> num;
			pair<int,int> p = {num, x};
			v.push_back(p);
		}
	}

	sort(v.rbegin(), v.rend());
	vector <pair<int,int>> v2;

	for(int i = 0;i < m-k+1;i++){
		// pair <int,int> p = {}
		v2.push_back({v[i].first,v[i].second});
	}

	sort(v2.begin(), v2.end(), sort_second);
	int tot = 0;
	int tambahan = 0;
	int var = m-k+1;

	for(int i = 0;i < m-k+1;i++){
		if(v2[i].second + tambahan >= i){
			// cout << "tambah + " << v2[i].first << endl;
			tot += v2[i].first;
		}
		else{
            tambahan ++;
		}
		// cout << v2[i].first << " " << v2[i].second << endl;
	}

	int found = 0;
	int idx = 0;
	while(found < tambahan){
		if(v[var + idx].second >= tambahan){
			// cout << v[var + idx].first << endl;
			tot += v[var + idx].first;
			found ++;
		}
		idx ++;
	}

	cout << tot << endl;

}
