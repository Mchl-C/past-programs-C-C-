// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++){
		int n;
		cin >> n;
		int arr[n + 10];
		int upB = 1e9;
		int lowB = 0;

		for(int x = 0;x < n;x++){
			cin >> arr[x];
		}

		for(int x = 0;x < n -1;x++){
			int a = arr[x];
			int b = arr[x + 1];
			int avgD = (a + b)/2;
			int avgU = (a + b + 1)/2;
			if(a < b){
				upB = min(upB, avgD);
			}
			else if(a > b){
				lowB = max(lowB, avgU);
			}
		}
		if(lowB <= upB){
			cout << lowB << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}
