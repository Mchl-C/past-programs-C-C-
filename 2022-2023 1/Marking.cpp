// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	bool mark[1000000100] = {false};
	int a,b,c, prev = 0;
	int x = 0;
	mark[x] = true;

	vector <int> v;
	for(int i = 0;i < t;i++){
		cin >> a >> b >> c;

		if(prev != a){
			// cout << "Idx : " << i << endl;
			prev = a;
			x = 0;
			memset(mark, false, a);
			v.clear();

			mark[x] = true;
			for(int p = 0;p < a;p++){
				v.push_back(x);
				// cout << "X : " << x << endl;
				x = (x + b) % a;
				if(mark[x]){
					x = (x + 1) % a;
				}
				mark[x] = true;
			}
			cout << v[c - 1] << endl;
		}
		else{
			if(!v.empty()){
				cout << v[c - 1] << endl;
			}
		}
		prev = a;
	}
}
