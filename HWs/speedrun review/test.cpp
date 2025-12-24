#include <bits/stdc++.h>
using namespace std;
#define pb push_back

bool cmp(pair <int, int> &a, pair<int, int> &b) {
    return a.second < b.second;
}

int main(){
    vector<pair<int, int>> v;
    v.pb({1, 2});
    v.pb({2,3});
    v.pb({3,0});
    v.pb({4,1});

    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << " " << it.second << endl;
    }

    /*
    unordered_map<int, int> m;
    m[1] = 2;
    m[2] = 3;
    m[3] = 0;
    m[4] = 1;

    sort(m.begin(), m.end(), cmp);
    for(auto it = m.begin(); it != m.end();it++){
            cout << it->first << " " << it->second << endl;
    }
    */

    /*
    map <int, pair<string, double>> mp;

    mp[300] = {"test", 12.302};
    mp[100] = {"hello", 1220.23};
    mp[200] = {"world", 123.23};

    for(auto &it:mp){
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }*/
    return 0;
}
