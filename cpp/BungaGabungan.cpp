#include <iostream>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int p,q,total;
    cin >> p >> q;
    total = p*p + q*q + 1;
    total % 4 == 0 ? cout << total / 4 << endl : cout << "-1\n";
	return 0;
}
