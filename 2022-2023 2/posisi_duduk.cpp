// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int m, a, b, max_pair, min_pair;
	cin >> m >> a >> b;

	max_pair = min(a,b);
	if(a + b == 2*m && a % 2 == 1 && b % 2 == 1){
		min_pair = 1;
	}
	else{
		min_pair = 0;
	}

	cout << min_pair << " " << max_pair << endl;

}

