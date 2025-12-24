// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n, arr[100][100], arr2[100][100];
	bool same = true;
	cin >> n >> n;

	for(int y = 0;y < n;y++){
		for(int x = 0;x < n;x++){
			cin >> arr[y][x];
		}
	}

	cin >> n >> n;
	for(int y = 0;y < n;y++){
		for(int x = 0;x < n;x++){
			cin >> arr2[y][x];
			if(arr2[y][x] != arr[y][x]){
				same = false;
			}
		}
	}

	if(same){cout << "identik" << endl;}
	else{
		bool horizontal = true;
		bool vertical = true;
		bool d_rb = true;
		bool d_lb = true;

		for(int y = 0;y < n;y++){
			for(int x = 0;x < n;x++){
				if(arr[y][x] != arr2[n - y - 1][x]){
					horizontal = false;
				}
				if(arr[y][x] != arr2[y][n - x - 1]){
					vertical = false;
				}
				if(arr[y][x] != arr2[x][y]){
					d_rb = false;
				}
				if(arr[y][x] != arr2[n - x - 1][n - y - 1]){
					d_lb = false;
				}
			}
		}

		if(horizontal){
			cout << "horisontal\n";
		}
		else if(vertical){
			cout << "vertikal\n";
		}
		else if(d_lb){
			cout << "diagonal kiri bawah\n";
		}
		else if(d_rb){
			cout << "diagonal kanan bawah\n";
		}
		else{
			cout << "tidak identik\n";
		}
	}

}

