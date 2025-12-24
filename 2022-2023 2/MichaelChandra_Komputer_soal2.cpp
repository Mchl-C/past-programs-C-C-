#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v = {1, 3, 7, 13, 21};
	int n;
	cin >> n;
	double res = 0;
	for(int i = 1;i < n;i++){
		if(i >= v.size()){
			v.push_back(v[i - 2] * v[i - 3]);
		}
		res += i*1.0 / (v[i] * v[i - 1]) * 1.0;
	}
	cout << res << endl;
}
