// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n, last = 0;

	while(cin >> m >> n){

		if(m == n){
			last = 1;
			n = 0;
		}
		else{
			last = n + 1;
		}
		for(int i = (n + 2);i <= m; i++){
			int multiply = last * i;
			while(multiply % 10 == 0){
				multiply /= 10;
			}
			last = multiply % 10;
		}
		cout << last << endl;
	}
	return 0;
}
