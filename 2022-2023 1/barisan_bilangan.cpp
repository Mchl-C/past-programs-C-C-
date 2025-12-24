// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,a,b;
    cin >> n >> a >> b;
    cout << (n/a) + (n/b) - (n/ lcm(b,a)) << endl;
    return 0;
}
