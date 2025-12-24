// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, x;
    cin >> n;
    ll v[n + 10] = {};
    ll ar[n + 10] = {};
    for(int i = 1;i <= n;i++){
        ar[i] = v[i] = i;
        cin >> x;
        swap(v[i], v[ar[x]]);
        swap(ar[i], ar[x]);
    }

    for(int i = 1;i <= n;i++){
        cout << v[i] << " ";
    }

    return 0;
}
