// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int cas;cas < t;cas++){
		string a,b;

		cin >> a;
		cin >> b;

		int a1 = 0, b1 = 0;
		for(char c : a){
			if(c == '1'){
				a1 ++;
			}
		}

		for(char c : b){
			if(c == '1'){
				b1 ++;
			}
		}

		int a0 = a.size() - a1;
		int b0 = b.size() - b1;
		int max_res = min(a0, b1) + min(a1, b0);

		for(int i = 0;i < a.size();i++){
			if(i < max_res){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}

		cout << endl;
		// cout << a1 << " " << b1 << endl;
		// cout << a0 << " " << b0;
	}
}
