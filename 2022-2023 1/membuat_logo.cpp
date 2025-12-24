// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,l;
	cin >> n >> m >> l;
	for(int y = 0;y < n;y++){
		for(int x = 0;x < m;x++){
			if(y < l || (n-y) <= l || x < l){
				cout << '*';
			}
			else{
				cout << '.';
			}
		}
		cout << endl;
	}

	return 0;
}
