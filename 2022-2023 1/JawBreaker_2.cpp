// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int tot = 0, arr[30][30];
bool used[30][30];
int row, collumn;

void emptied(){
	for(int i = 0;i < 30;i++){
		for(int x = 0;x < 30;x++){
			used[i][x] = false;
		}
	}
}

void check(int b, int k){
	int ts = arr[b][k];
	used[b][k] = true;
	tot ++;

	if(b > 0 && arr[b - 1][k] == ts && !used[b - 1][k]){
		check(b - 1, k);
	}
	if(b < row && arr[b + 1][k] == ts && !used[b + 1][k]){
		check(b + 1, k);
	}
	if(k > 0 && arr[b][k - 1] == ts && !used[b][k - 1]){
		check(b, k - 1);
	}
	if(k < collumn && arr[b][k + 1] == ts && !used[b][k + 1]){
		check(b, k + 1);
	}
}

int main(){
	int max_value = 0;

	cin >> row >> collumn;
	for(int y = 0;y < row;y++){
		for(int x = 0;x < collumn;x++){
			cin >> arr[y][x];
		}
	}

	for(int y = 0;y < row;y++){
		for(int x = 0;x < collumn;x++){
			emptied();
			tot = 0;
			check(y, x);
			int value = tot * (tot - 1);
			max_value = max(max_value, value);
		}
	}

	cout << max_value << endl;
}

