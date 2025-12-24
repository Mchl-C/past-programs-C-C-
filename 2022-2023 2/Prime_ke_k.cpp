// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int limit = 1000000, found = 1;

    bool arr[limit];
    int ans[limit];
    memset(arr,1,limit);

    for(int i = 2;i <= sqrt(limit);i++){
        if(arr[i]){
            ans[found] = i;
            for(int x = i*i;x < limit;x += i){
                arr[x] = false;
            }
            found ++;
        }
    }

    for(int i = sqrt(limit);i <= limit;i++){
        if(arr[i]){
            ans[found] = i;
            found ++;
        }
    }

    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        int n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}
