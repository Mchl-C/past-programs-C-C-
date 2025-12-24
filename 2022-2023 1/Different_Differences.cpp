// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++){
		int k,n;
		cin >> k >> n;
		int num = 1;
		int add = 1;

		for(int x = 1;x <= k;x++){
			cout << num << " ";
			if(num + add + (k-x-1) <= n){
				num += add;
				add ++;
			}
			else if(num + add == n){
				if((k-x) <= 1){
					num += add;
				}
				else{
					num ++;
				}
				add ++;
			}
			else{
				// cout << " masuk else, jumlah num : " << num << " , add : " << add << " ,";
				for(int y = num;x < k;x++){
					num ++;
					cout << num << " ";
				}
				break;
			}
		}
		cout << endl;
	}
}
