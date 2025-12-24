// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);

int tot = 0;
char arr[30][30], arr2[30][30];
bool used[30][30], packed[30][30];
int row, collumn;

void emptied(){
	for(int i = 0;i < 30;i++){
		for(int x = 0;x < 30;x++){
			used[i][x] = false;
		}
	}
}

void check(int b, int k){
	char ts = arr[b][k];
	used[b][k] = true;
	tot ++;

	if(ts != '.' && b > 0 && arr[b - 1][k] == ts && !used[b - 1][k]){
		check(b - 1, k);
	}
	if(ts != '.' && b < row && arr[b + 1][k] == ts && !used[b + 1][k]){
		check(b + 1, k);
	}
	if(ts != '.' && k > 0 && arr[b][k - 1] == ts && !used[b][k - 1]){
		check(b, k - 1);
	}
	if(ts != '.' && k < collumn && arr[b][k + 1] == ts && !used[b][k + 1]){
		check(b, k + 1);
	}
}

void change(int b, int k){
	char ts = arr[b][k];
	arr[b][k] = '.';
	packed[b][k] = true;

	if(b > 0 && arr[b - 1][k] == ts){
		change(b - 1, k);
	}
	if(b < row && arr[b + 1][k] == ts){
		change(b + 1, k);
	}
	if(k > 0 && arr[b][k - 1] == ts){
		change(b, k - 1);
	}
	if(k < collumn && arr[b][k + 1] == ts){
		change(b, k + 1);
	}
}

void fall(int b, int k){
	while(b < row && arr[b + 1][k] == '.'){
		arr[b + 1][k] = arr[b][k];
		arr[b][k] = '.';
		b ++;
	}
}

void collapse(){
	for(int r = row - 1;r >= 0;r--){
		for(int c = 0;c < collumn;c++){
			fall(r, c);
		}
	}
}

void copied(){
	for(int i = 0;i < row;i++){
		for(int x = 0;x < collumn;x++){
			arr[i][x] = arr2[i][x];
		}
	}
}

int main(){
	fastio;
	int max_point = 0, total = 0;

	cin >> row >> collumn;

	for(int y = 0;y < row;y++){
		for(int x = 0;x < collumn;x++){
			packed[y][x] = false;
		}
	}

	for(int y = 0;y < row;y++){
		for(int x = 0;x < collumn;x++){
			cin >> arr[y][x];
			arr2[y][x] = arr[y][x];
		}
	}

	for(int y = 0;y < row;y++){
		for(int x = 0;x < collumn;x++){
			if(packed[y][x]){continue;}
			emptied();
			copied();

			tot = 0;
			check(y, x);
			if(tot < 2){
				continue;
			}
			int value = tot * (tot - 1);

			change(y, x);
			collapse();

			int max_value = 0;
			for(int r = 0;r < row;r++){
				for(int c = 0;c < collumn;c++){
					emptied();
					tot = 0;
					check(r, c);
					int value1 = tot * (tot - 1);
					max_value = max(max_value, value1);
				}
			}

			for(int r = 0;r < row;r++){
				for(int c = 0;c < collumn;c++){
					cout << arr[r][c] << " ";
				}
				cout << endl;
			}

			max_point = max(max_point, max_value + value);
			cout << max_point << endl << endl;
		}
	}

	cout << max_point << endl;
}

