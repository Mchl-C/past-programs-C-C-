// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define loop(n) for(int i = 1;i <= n;i++)
using namespace std;

int main(){
    int num; cin >> num;
    int a = num / 1000000, b = (num % 1000000) / 1000, c = num % 1000;
    cout << 'O';
    loop(c) cout << 'S';
    cout << 'A';
    loop(1000 - c) cout << 'S';
    loop(b) cout << 'A';
    loop(998) cout << 'O';
    loop(1000) cout << 'S';
    loop(a) cout << 'A';
    cout << endl;

    return 0;
}
