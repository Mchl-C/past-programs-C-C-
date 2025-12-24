// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fastio ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int n, res[10], v[15];
bool pernah[10] = {0};

void perm(int depth, int start){
	if(depth == 6){
		int cn = 0;
		for(int i = 1;i < 6;i++){
			if(res[i] > res[i - 1]){
				cn ++;
			}
		}

		if(cn == 5){
			for(int i = 0;i < 5;i++){
				cout << res[i] << " ";
			}
			cout << res[5] << endl;
		}
		return ;
	}
	for(int i = start;i < n;i++){
		if(!pernah[i]){
			pernah[i] = true;
			res[depth] = v[i];
			perm(depth + 1, start + 1);
			pernah[i] = false;
		}
	}
}

int main() {
	fastio
	bool first = true;
	while(cin >> n && n){
		if(first) first = false;
		else cout << endl;

		for(int i = 0;i < n;i++){
			cin >> v[i];
		}
		perm(0, 0);
	}
}
