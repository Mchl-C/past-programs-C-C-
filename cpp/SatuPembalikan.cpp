#include <iostream>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,b,indeks = 0;
	cin >> t;
	int a[t+1];
	for(int i = 0;i < t;i++){
		cin >> a[i];
	}
	for(int i = 0;i < t;i++){
		cin >> b;
		if(a[i] == b){
			indeks ++;
		}
	}
	cout << indeks << endl;
	return 0;
}
