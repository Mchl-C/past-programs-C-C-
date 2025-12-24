// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,x;
	int step = 1;
	cin >> a >> b >> c >> x;

	int z = (a*x + b) % c;
	while(z != x){
		z = (a*z + b) % c;
		step ++;
	}
	cout << step << endl;

	return 0;
}
