// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void res(int n, char a, char b, char c){
    if(n == 1){
        cout << n << " " << a << " " << b << endl;
        return;
    }
    res(n - 1, a, c, b);
    cout << n << " " << a << " " << b << endl;
    res(n - 1, c, b, a);
}

int main() {
	int n;
    cin >> n;
    res(n, 'A', 'C', 'B');

}
