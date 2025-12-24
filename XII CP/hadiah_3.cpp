// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

signed main(){
    int n, d = 1; cin >> n; vector<int> v;
    while(d < n){if(d * 3 > n) break;d *= 3;}
    while(n > 0 && d > 0) {if(d <= n){n -= d;v.pb(d);} d /= 3;}
    cout << v.size() << endl;
    for(int i = v.size() - 1;i >= 0;i--) cout << v[i] << " ";

    return 0;
}
