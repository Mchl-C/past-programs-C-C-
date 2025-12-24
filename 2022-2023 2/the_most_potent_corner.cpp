#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while (cin >> t){
        vector<int> v((1 << t));
        vector<int> ans((1 << t));

        for(int i =  0;i < (1 << t);i++){
            cin >> v[i];
        }

        int max_num = 0;
        for(int i = 0;i < (1 << t);i++){
            int total = 0;
            // cout << "Side : " << v[i] << endl;
            // cout << "Adjacent : ";
            for(int x = 0;x < t;x++){
                int adjacent = i ^ (1 << x);
                total += v[adjacent];
                // cout << v[adjacent] << " ";
            }
            // cout << endl;
            // cout << "Total : " << total << endl;
            ans[i] = total;
        }

        for(int i = 0;i < (1 << t);i++){
            for(int x = 0;x < t;x++){
                int adjacent = i ^ (1 << x);
                int jumlah = ans[i] + ans[adjacent];
                max_num = max(max_num, jumlah);
            }
        }
        cout << max_num << endl;
    }
    return 0;
}
