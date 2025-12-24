#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while(cin >> t){
        if(t == 0) break;
        int arr[t + 15][50];
        map <int, int> track;

        for(int i = 0;i < t;i++){
            for(int x = 0;x < 5;x++){
                cin >> arr[i][x];
                if(track.count(arr[i][x]) == 0){
                    track[arr[i][x]] = 1;
                }
                else{
                    track[arr[i][x]] ++;
                }
            }
        }

        vector<pair<int, int>> MM;
        for(auto i = track.begin(); i != track.end();i++){
            int a = i->second, b = i->first;
            // cout << b << " " << a << endl;
            pair<int,int> p;
            p.first = a, p.second = b;
            MM.push_back(p);
        }

        // cout << "Track : " << track.size() << endl;
        sort(MM.begin(),MM.end() + 1);

        int lst[15];
        int cn = 1;
        bool more = true;

        for(auto i = MM.end(); i != MM.begin();i--){
            if(cn <= 5){
                if(i->first >= 2){
                    lst[cn] = i->second;
                }
                else{
                    more = false;
                }
            }
            // cout << i->first << " " << i->second << endl;
            cn++;
        }

        // cout << "Result" << endl;
        if(!more){
            cout << t << endl;
            return 0;
        }

        int student = 0;
        for(int i = 0;i < t;i++){
            bool meet = true;
            for(int x = 0;x < 5;x++){
                bool found = false;
                for(int z = 1;z <= 5;z++){
                    if(arr[i][x] == lst[z]){
                        found = true;
                        break;
                    }
                }
                if(!found){
                    meet = false;
                    break;
                }
            }
            if(meet){
                student ++;
            }
        }

        cout << student << endl;
    }
    return 0;
}
