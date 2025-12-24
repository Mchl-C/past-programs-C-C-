#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while (cin >> t) {
        if (t == 0) break;

        // hitung brp byk yg kombinasi sama
        map<vector<int>, int> freq;
        for (int i = 0; i < t; i++) {
            vector<int> comb(5);
            for (int j = 0; j < 5; j++) {
                cin >> comb[j];
            }
            sort(comb.begin(), comb.end());
            freq[comb]++;
        }

        // cari max dari kombinasi
        int max_freq = 0;
        for (auto p : freq) {
            max_freq = max(max_freq, p.second);
        }

        // klo sama dgn jumlah maxnya, tambah
        int cnt = 0;
        for (auto p : freq) {
            if (p.second == max_freq) {
                cnt += p.second;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
