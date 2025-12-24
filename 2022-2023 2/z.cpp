#include <bits/stdc++.h>
using namespace std;

int reverse(int num){
	int total = 0, p = log10(num);
	while(num != 0){
		total += num % 10 * pow(10,p);
		num /= 10;
		p--;
	}
	return total;
}

int main() {
	int a,b,c;
	cin >> a;
	for(int i = 0;i < a;i++){
		cin >> b >> c;
		int reversed_sum = reverse(b) + reverse(c);
		cout << reverse(reversed_sum) << endl;
	}

	return 0;
}
