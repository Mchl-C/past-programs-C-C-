#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>>pq;

    vector <pair<int,int>> v;
    string s;
    while(cin >> s){
        if(s == "#"){
            break;
        }
        int a,b;
        cin >> a >> b;

        v.push_back({b,a});
        pq.push({b,a});
    }

    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        cout << pq.top().second << endl;
        int x = pq.top().first, y = pq.top().second;
        // cout << x << " " << y << " " << pq.size() << endl;
        pq.pop();
        // cout << "Another : " << pq.top().first << " " << pq.top().second << endl;

        for(auto it = v.begin();it != v.end();it++){
            // cout << typeid(it).name() << endl;
            if(it->second == y){
                // cout << y << " : " << it->first << endl;
                x += it->first;
                // cout << "x : " << x << endl;
                break;
            }
        }

        pq.push({x,y});
        // cout << "res : " << x << " " << y << endl << endl;
    }
    return 0;
}
