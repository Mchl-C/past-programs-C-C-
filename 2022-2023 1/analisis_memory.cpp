// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int t(int n){
    float p = n;
    if(n == 1){
        return 1;
    }
    return(1 + t(ceil(p/2)) + t(floor(p/2)));
}

int main() {
	int n;
    cin >> n;

    cout << t(n) << endl;

	return 0;
}
