#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 0;
	for(int i = 1000000;i < 10000000;i++){
		long long num = i,total = 0,multiply = 1;
		while(num != 0){
			total += num % 10;
			multiply *= num % 10;
			num /= 10;
		}
		if(total == multiply){
			cout << i << endl;
			a ++;
		}
	}
	cout << "result total : " << a << endl;
	return 0;
}
