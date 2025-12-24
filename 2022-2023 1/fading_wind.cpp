// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);

int main() {
	int h, k, v, s, d = 0;
	cin >> h >> k >> v >> s;

	while(h > 0){
		v += s;
		v -= max(1, (int) round(v/10));

		if(v >= k){
			h ++;
		}
		else if(v > 0 && v < k){
			h --;
			if(h <= 0){
				v = 0;
			}
		}
		else{
			h = 0;
			v = 0;
		}
		d += v;

		if(s > 0){
			s --;
		}
	}
	cout << d << endl;
}
