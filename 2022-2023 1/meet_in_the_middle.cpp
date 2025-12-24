// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, arr[1000], ans[1000];
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }

    int bck = 1, fr = 0;

    for(int i = 0;i < n;i++){
        if(i % 2 == 0){
            ans[i] = arr[fr];
            fr ++;
        }
        else{
            ans[i] = arr[n-bck];
            bck ++;
        }
    }

    for(int i = 0;i < n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;

	return 0;
}
