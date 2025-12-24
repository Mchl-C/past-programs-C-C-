#include <iostream>
using namespace std;

int factorial(int num){
	if(num == 1){return 1;}
	else if(num % 2 == 0){return num/2*factorial(num-1);}
	else if(num % 2 == 1){return num*factorial(num-1);}
}
int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	cout << factorial(n) << endl;
	return 0;
}
