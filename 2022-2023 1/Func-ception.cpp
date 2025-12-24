// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b,x,y;
	cin >> a >> b >> x >> y;
	while(x <= y){
		cout << x << endl;
		x = (a*x) + b;
	}

	return 0;
}
