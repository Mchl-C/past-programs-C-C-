#include <iostream>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	cout << n - 1 << endl;
	for(int i = 0;i < n-2;i++){
		cout << 1 << " ";
	}
	cout << 2 << endl;
	return 0;
}
