// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t --){
		int n; string s;
		cin >> n;
		cin >> s;

		for(int i = 1;i <= n;i++){
			if(n % i == 0){
				string prefix = s.substr(0, i);
				string suffix = s.substr(n - i, i);
				string s1 = "", s2 = "";

				for(int x = 0;x < (n/i); x++){
					s1 += prefix;
					s2 += suffix;
				}

				int d1 = 0, d2 = 0;
				for(int i = 0;i < n;i++){
					if(s1[i] != s[i]) d1 ++;
					if(s2[i] != s[i]) d2 ++;
				}

				if(d1 <= 1 || d2 <= 1){
					cout << i << endl;
					break;
				}
			}
		}
	}
}
