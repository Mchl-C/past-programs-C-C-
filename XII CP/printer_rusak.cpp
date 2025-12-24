// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

// void pv(vector<int> v){
//     for(int i : v){
//         cout << i << " ";
//     }
//     cout << endl;
// }

signed main(){
    int n, m, q, t;

    cin >> n >> m;
    vector<bool> v(n + 10, true);
    vector<int> ar;
    for(int i = 0; i < m;i++){
        int num; cin >> num;
        for(int j = num;j <= n;j += num){
            v[j] = false;
        }
    }
    for(int i = 1; i <= n;i++){
        if(v[i]) ar.pb(i);
    }

    // pv(ar);
    cin >> q >> t;
    if(t == 1){
        while(q--){
            int x; cin >> x;
            cout << (v[x] ? 1 : -1) << " ";
        }
    }
    else if(t == 2){
        while(q--){
            int x; cin >> x;
            auto it = find(ar.begin(), ar.end(), x);
            if(it == ar.end()) cout << -1 << " ";
            else cout << distance(ar.begin(), it) + 1 << " ";
        }
    }
    else{
        while(q--){
            int x; cin >> x;
            if(x > ar.size()) cout << -1 << " ";
            else cout << ar[x - 1] << " ";
        }
    }


    return 0;
}
