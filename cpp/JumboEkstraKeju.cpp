#include <iostream>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long n,size;
	cin >> n;
	if(n >= 99){
		cout << 9 << endl;
	}
	else{
		size = (n+1)/10;
		if(size % 10 == 0){
			cout << size << endl;
		}
		else{
			cout << size - 1 << endl;
		}
	}
	return 0;
}
