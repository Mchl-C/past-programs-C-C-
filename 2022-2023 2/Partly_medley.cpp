// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void print_v(vector<int> v){
	for(int i : v){
		cout  << i << " ";
	}
	cout << endl;
}

int main() {
	int n, diff;
	cin >> n >> diff;

	int arr[n];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int l = 0, r = 2;
	int d;
	vector <int> v;

	while(l < r){
		if(arr[r] - arr[l] <= diff){
			if(r - l < 2){
				r ++;
			}
			else{
				int sum = 0;
				for(int x = l; x < r;l++){
					sum += arr[x];
				}
				v.push_back(sum);
				l ++;
				r ++;
			}
		}
		else if(arr[r] - arr[l] > diff){
			l ++;
		}
		cout << "l-r : " << arr[l] << " " << arr[r] << endl;
	}

	print_v(v);
}
