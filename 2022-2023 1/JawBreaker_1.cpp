// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int tot = 0, arr[50][50];
int row, collumn, b, k;

void check(int b, int k){
	int ts = arr[b][k];
	arr[b][k] = 0;
	// cout << "arr[b][k] : " << b << " " << k << endl;
	tot ++;
	if(b > 0 && arr[b - 1][k] == ts){
		check(b - 1, k);
	}
	if(b < row && arr[b + 1][k] == ts){
		check(b + 1, k);
	}
	if(k > 0 && arr[b][k - 1] == ts){
		check(b, k - 1);
	}
	if(k < collumn && arr[b][k + 1] == ts){
		check(b, k + 1);
	}
}

int main(){
	cin >> row >> collumn;
	for(int y = 0;y < row;y++){
		for(int x = 0;x < collumn;x++){
			cin >> arr[y][x];
		}
	}
	cin >> b >> k;
	check(b, k);
	cout << tot * (tot - 1) << endl;
}

