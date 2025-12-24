#include <iostream>
using namespace std;

int main() {
	int a,b,c = 0;
	cin >> a >> b;
	for(int i = 2;i <= min(a,b);i++){
		if(a % i == 0 && b % i == 0){
			c = i;
		}
	}
	if(c != 0){
		cout << a/c << " " << b/c << endl;
	}
	else{
		cout << "Tidak\n";
	}
	return 0;
}
