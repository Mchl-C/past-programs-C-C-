// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	map <int, int> x;

	for(int i = 0;i < n;i++){
		int num;
		cin >> num;
		x[num] = 0;
	}

	for(auto i : x){
		int pow;
		cin >> pow;
		x[i.first] = pow;
	}

	cin >> m;
	map <int, int> y;
	for(int i = 0;i < m;i++){
		int num;
		cin >> num;
		y[num] = 0;
	}

	for(auto i : y){
		int pow;
		cin >> pow;
		y[i.first] = pow;
	}

	bool zero = false;
	for(auto i : y){
		if(x.count(i.first) > 0){
			x[i.first] -= i.second;
			if(x[i.first] <= 0){
				x.erase(i.first);
			}
		}
		else{
			zero = true;
			break;
		}
	}

	// for(auto i : x){
	// 	cout << i.first << " " << i.second << endl;
	// }
	if(zero){
		cout << 0 << endl;
	}
	else if(x.size() == 0){
		cout << 1 << endl;
	}
	else{
		cout << (x.size() + 1)*2 << endl;
	}

}
