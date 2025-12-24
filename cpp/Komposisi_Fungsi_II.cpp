#include <iostream>
using namespace std;

int a,b,k,x;
int f(int k,int x,int a,int b){
	if(k == 0){return x;}
	return abs(a*f(k-1,x,a,b) + b);
}
int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> a >> b >> k >> x;
	cout << f(k,x,a,b) << endl;
	return 0;
}
