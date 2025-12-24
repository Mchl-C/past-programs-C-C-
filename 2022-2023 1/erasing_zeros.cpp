// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++){
		int tot = 0;
		int x,y;
		cin >> x >> y;

		int a,b;
		cin >> a >> b;

		if(2*a <= b){
			tot = (x + y) * a;
		}
		else{
			tot = min(x,y) * b + abs(x - y) * a;
		}

		cout << tot << endl;
	}
}
