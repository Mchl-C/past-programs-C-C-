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
		int total = 0;

		memset(asc,0,sizeof(asc));

		for(int i = 0;i < n;i++){
			char ch;

			cin >> ch;
			int c = ch;
			asc[c] ++;
		}

		for(int i = 64;i <= 90;i++){
			double d = (asc[i] + asc[i + 32])/2;
			int num = (asc[i] + asc[i + 32])/2;

			if(d - num == 0 && (d != 0 || num != 0)){
				// cout << (char) i << " ";
				int lol = abs(asc[i] - asc[i + 32]);
				if(lol > 0){
					if(k >= (lol/2)){
						k -= (lol/2);
						total += num;
					}
					else{
						total += min(asc[i], asc[i + 32]) + k;
						k = 0;
					}
				}
				else{
					total += asc[i];
				}
				// cout << total << endl;
				//cout << max(asc[i], asc[i + 32]) - min(asc[i],asc[i + 32]) << endl;
			}
		}
		cout << total << endl;
	}
	return 0;
}
