// Source: https://usaco.guide/general/io

#include <iostream>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k,n;
	cin >> k >> n;
	cout << "Think of a number, any number\n";
	cout << "Multiply it by " << k << endl;
	cout << "Add " << k*n << " to your number\n";
	cout << "Now, divide your total by " << k << endl;
	cout << "Finally, subtract the result from the first number you pick\n";
	cout << "BRAVO!!!\n";
	cout << "Your answer is " << n << endl;
	return 0;
}
