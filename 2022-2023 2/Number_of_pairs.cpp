// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++){
		int n,k;
		cin >> n >> k;

		int asc[200];
		memset(asc,0,sizeof(asc));

		char s[n + 10];
		for(int i = 0;i < n;i++){
			cin >> s[i];
			int ch = s[i];
			asc[ch] ++;
		}

		int total = 0;
		for(int i = 64; i <= 90;i++){
			if(asc[i] > 0 || asc[i + 32] > 0){
				if(k > 0){
					while(asc[i] + 1 < asc[i + 32]){
						asc[i + 32] --;
						asc[i] ++;
						k --;
					}
					while(asc[i + 32] + 1 < asc[i]){
						asc[i + 32] ++;
						asc[i] --;
						k --;
					}
				}
			}
		}

		for(int i = 64; i <= 90;i++){
			if(asc[i] > 0){
				if(asc[i] == asc[i + 32]){
					total += asc[i];
				}
				else if(asc[i] < asc[i + 32]){
					total += asc[i];
				}
				else if(asc[i + 32] < asc[i] && asc[i + 32] > 0){
					total += asc[i + 32];
				}
			}
		}

		// for(int i = 64; i <= 122; i++){
		// 	if(asc[i] > 0){
		// 		char ch = i;
		// 		// cout << ch << " : " << asc[i] << endl;
		// 	}
		// }

		cout << total << endl;
	}
}
