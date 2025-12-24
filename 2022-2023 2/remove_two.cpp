// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++){
		int n;
		string s;

		cin >> n >> s;

		int ans = n - 1;
		for(int x = 0;x < n - 2;x++){
			if(s[x] == s[x + 2]){
				ans --;
			}
		}
		cout << ans << endl;
	}


	return 0;
}
