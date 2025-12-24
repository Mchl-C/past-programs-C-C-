#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long int a = 0,b = 1, c, n,ans;

	cin >> n;

	if (n == 1) {
        ans = b;
	 	cout << b << endl;
	  	return 0;
	}
	for(int i = 2;i < n + 1;i++){
		c = (a + b) % 1000000007;
		a = b;
		b = c;
	}
	ans = b;
	cout << "Ans is " << b << endl;

    a = 0,b = 1, c = 0;
    for(int i = 2;i < n + 1;i++){
        c = (a + b) % 1000000007;
		a = b;
		b = c;

		if(b == ans){
            cout << "B is equal to ans : " << i << endl;
		}
    }
	return 0;
}
