
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	cin >> n >> x >> y;
	if(x < y){
		cout << n << endl;
	}
	else{
		cout << (n % y) + ((n - (n % y))/y)*x << endl;
	}
	return 0;
}
