// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	if((n - x) + (m - y) * 2 > 25){
		cout << "LOLOS\n";
	}
	else{
		cout << "TIDAK LOLOS\n";
	}
}

