// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0;i < t;i++){
		int n;
		cin >> n;

		int gcd;
		cin >> gcd;
		for(int x = 1;x < n;x++){
			int num;
			cin >> num;
			gcd = __gcd(num, gcd);
		}

		if(gcd == 1){
			cout << n << endl;
		}
		else{
			cout << -1 << endl;
		}
	}

}
