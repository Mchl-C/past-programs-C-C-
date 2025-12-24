// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define rep(start, end) for(ll i = start;i < end;i++)
using namespace std;

int main() {
	ll num;
    bool nol = false;
    vector<ll> v;

    while(cin >> num){
        if(num == 0 && nol){
            break;
        }

        if(num == 0){
            // cout << "num : " << num << endl;
            nol = true;

            vector <ll> v1;
            sort(v.begin(),v.end());
            // rep(0,v.size()) cout << v[i] << " ";

            for(ll i = v.size() - 1;i > 0;i--){
                // cout << "v[i] - v[i-1] : " << v[i] << " - " << v[i-1] << " : " << v[i] - v[i-1] << endl;
                v1.pb(v[i] - v[i-1]);
            }

            v.clear();

            ll gcd = 0;
            for(ll i : v1){
                gcd = __gcd(gcd, i);
            }
            cout << gcd << endl;
        }
        else{
            nol = false;
            v.pb(num);
        }
    }
}
