// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

vector <string> v;
int tile[128][128];
int x,y;

void fill(string pos,int x1,int y1,int x2,int y2){
	if(pos.size() == 0){
		// cout << x1 << " " << y1 << " <-> " << x2 << " " << y2 << endl;
		for(int row = y1;row < y2;row++){
			for(int col = x1;col < x2;col++){
				tile[row][col] = 1;
			}
		}
	}
	else{
		int delta_x = (x2 - x1) / 2;
		int delta_y = (y2 - y1) / 2;

		if(pos[0] == '0'){
			x2 -= delta_x;
			y2 -= delta_y;
		}
		else if(pos[0] == '1'){
			x1 += delta_x;
			y2 -= delta_y;
		}
		else if(pos[0] == '2'){
			x2 -= delta_x;
			y1 += delta_y;
		}
		else if(pos[0] == '3'){
			x1 += delta_x;
			y1 += delta_y;
		}
		fill(pos.substr(1,pos.size() - 1), x1, y1, x2, y2);
	}
}

int main() {
	fastio
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string pos;
		cin >> pos;
		v.pb(pos.substr(1, pos.size() - 1));
	}

	int vr, hr;
	cin >> y >> x;
	y % 2 == 0 ? vr = y : vr = y + 1;
	x % 2 == 0 ? hr = x : hr = x + 1;

	for(int row = 0;row < vr;row ++){
		for(int col = 0;col < hr;col ++){
			tile[row][col] = 0;
		}
	}

	for(int i = 0;i < n;i++){
		fill(v[i], 0, 0, hr, vr);
	}

	for(int row = 0;row < y;row ++){
		for(int col = 0;col < x;col ++){
			cout << tile[row][col] << " ";
		}
		cout << endl;
	}
}

