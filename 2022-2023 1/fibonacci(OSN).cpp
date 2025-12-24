// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

double phi = (1 + sqrt(5)) / 2;
ll fibinv(ll f){
    return round(log(f * sqrt(5)) / log(phi));
}

ll recount(ll f){
	// cout << pow(phi, f) << " " << pow((1 - phi), f) << " " << sqrt(5) << endl;
	ll res = pow(phi, f) - pow((1 - phi), f);
	res = round(res / sqrt(5));
	return res;
}

int main() {
	ll num;
	cin >> num;
	ll n = fibinv(num);
	if(recount(n) == num){
		cout << n + 1 << endl;
	}
	else{
		cout << 0 << endl;
	}
}
