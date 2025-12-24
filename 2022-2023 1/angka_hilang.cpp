// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
    cin >> n >> k;

    bool num[n + 10] = {false};

    for(int i = 0;i < k;i++){
        int p;
        cin >> p;
        num[p] = true;
    }

    for(int i = 1;i <= n;i++){
        if(num[i] == false){
            cout << i << " ";
        }
    }
    cout << endl;

	return 0;
}
