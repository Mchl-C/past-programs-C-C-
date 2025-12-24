// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int arr[10] = {0};
bool used[10] = {false};

void perm(int depth, int n, int k){
    if(depth >= n){
        for(int i = 0;i < n;i++){
            cout << arr[i];
            if(i < n-1){
                cout << " ";
            }
        }
        cout << endl;
    }

    else{
        for(int i = 0;i < n;i++){
            if((!used[i]) && ((abs((i + 1) - arr[depth - 1]) <= k) || depth == 0)){
                used[i] = true;
                arr[depth] = i + 1;
                perm(depth + 1, n, k);
                used[i] = false;
            }
        }
    }
}

int main() {
	int n, k;
    cin >> n >> k;
    perm(0, n, k);
}
