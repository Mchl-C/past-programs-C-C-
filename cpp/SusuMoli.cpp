#include <iostream>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n,a,b,k;
	cin >> t;
	for(int i = 0;i < t;i++){
		cin >> n >> a >> b >> k;
		for(int x = 0;x < k;x++){
			n += b - a;
		}
		cout << "Kasus #" << i+1 << ": " << n << endl;
	}
	return 0;
}
