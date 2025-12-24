// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	int tot = 0;
	bool p = 0;
	for(int i = 0;i < n;i++){
		if(a[i] > b[i]){
			if(!p) tot ++; p = 1;
		}
		else if(a[i] < b[i]) p = 0;
	}

	cout << tot << endl;
}
