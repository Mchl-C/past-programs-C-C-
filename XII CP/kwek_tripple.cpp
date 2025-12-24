// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;
	cin >> n;

	int m = 1;

	for(int i = 2;i <= sqrt(n);i++){
		if(n % (i*i) == 0){
			m = i;
		}
	}

	cout << n / (m*m) << endl;

}
