#include <bits/stdc++.h>
using namespace std;

int main() {
	int test, a, b, c;
	cin >> test;
	for(int i = 0;i < test;i++){
		int move = 0,ans = 0;
		cin >> a >> b >> c;
		move = a % c;
		if(move == 0){
			ans = b;
		}
		else{
			if((b - move) <= 0){
				ans = a - (move - b);
			}
			else{
				ans = b - move;
			}
		}
		cout << "Case " << i+1 << ": " << ans << endl;
	}
}
