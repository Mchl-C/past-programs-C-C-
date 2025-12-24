#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	bool correct = false;
	for(int i = 0;i < t;i++){
		int n;
		cin >> n;
		if(n % 2 == 0){
			correct = true;
		}
	}
	correct ? cout << "YA" << endl : cout << "TIDAK" << endl;
	return 0;
}
