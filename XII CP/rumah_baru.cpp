// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

signed main(){
    int n, count = 0; cin >> n;
    int x[n + 10], y[n + 10];
    for(int i = 1;i <= n;i++) cin >> x[i];
    for(int i = 1;i <= n;i++) cin >> y[i];
    for(int i = -100;i <= 100;i++){
        for(int j = -100;j <= 100;j++){
            bool l,r,u,d;
            l = r = u = d = false;
            for(int k = 1;k <= n;k++){
                if(x[k] < j && y[k] == i) l = true;
                if(x[k] > j && y[k] == i) r = true;
                if(y[k] < i && x[k] == j) d = true;
                if(y[k] > i && x[k] == j) u = true;
            }
            if(l && r && d && u) count ++;
        }
    }

    cout << count << endl;
    return 0;
}
