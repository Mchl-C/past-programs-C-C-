// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, tot = 0;
    cin >> n;
    for(int y = 0;y < n;y++){
        for(int x = 0;x < n;x++){
            int num;
            cin >> num;
            if(x == y){
                tot += num;
            }
        }
    }
    cout << tot << endl;

	return 0;
}
