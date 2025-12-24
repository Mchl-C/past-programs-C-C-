#include <iostream>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,k,ans = 0;
	cin >> n >> k;
	if(n < k){
		cout << n << endl;
	}
	else{
		for(int i = 0;i < k;i++){
			ans ++;
		}
		for(int i = 0;i < n - k;i++){
			ans *= 2;
		}
		cout << ans << endl;
	}
	return 0;
}
