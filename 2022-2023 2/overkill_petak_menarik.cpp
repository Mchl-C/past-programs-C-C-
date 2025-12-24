// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct pos{
	ll x,y;
};

bool cmp(pos a, pos b){
	return a.x < b.x;
}

bool cmp2(pos a, pos b){
	return a.y < b.y;
}

int main() {
	ll n,m,k;
	cin >> n >> m >> k;

	ll arr[n + 10][m + 10], lst[n + 10][m + 10];
	pos p[n * m + 10];

	for(int i = 0;i < n;i++){
		for(int x = 0;x < m;x++){
			cin >> arr[i][x];
		}
	}

	ll found = 0;
	for(int i = 0;i < n;i++){
		for(int x = 0;x < m;x++){
			ll value = 1;
			bool left = true, right = true, up = true, down = true;
			if(x == 0){left = false;}
			if(x == m - 1){right = false;}
			if(i == 0){up = false;}
			if(i == n - 1){down = false;}

			if(!left && !right && !up && !down){
				value = 0;
			}
			else{
				if(left){
					value *= arr[i][x - 1];
				}
				if(right){
					value *= arr[i][x + 1];
				}
				if(up){
					value *= arr[i - 1][x];
				}
				if(down){
					value *= arr[i + 1][x];
				}
			}

			if(value == k){
				p[found].x = x + 1;
				p[found].y = i + 1;
				found ++;
			}
		}
	}

	pos p2[n * m + 10];

	if(!found){
		cout << "0 0" << endl;
	}
	else{
		sort(p, p + found, cmp);
		ll idx = 0;

		for(int i = 0;i < found;i++){
			if(p[i].x == p[0].x){
				p2[idx].x = p[i].x;
				p2[idx].y = p[i].y;
				idx ++;
			}
		}

		sort(p2, p2 + idx, cmp2);
		cout << p2[0].y << " " << p2[0].x << endl;

	}

}

