#include <iostream>
#include <string>
using namespace std;

string biner(int num){
	if(num == 1){return "1";}
	if(num % 2 == 0){
		return biner(num/2) + "0";
	}
	else{
		return biner(num/2) + "1";
	}
}
int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int input;
	cin >> input;
	cout << biner(input) << endl;
	return 0;
}
