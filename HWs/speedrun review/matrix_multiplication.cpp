#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n; cin >> m >> n;
    int arr[m + 1][n + 1];
    for(int i = 0;i < m; i++){
        for(int j = 0; j < n;j++) cin >> arr[i][j];
    }

    int a, b; cin >> a >> b;
    int ar[a + 1][b + 1];
    for(int i = 0;i < a; i++){
        for(int j = 0; j < b;j++) cin >> ar[i][j];
    }

    cout << "First Matrix\n";
    for(int i = 0;i < m;i++){
        for(int j = 0; j < n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Second matrix\n";
    for(int i = 0;i < a;i++){
        for(int j = 0; j < b;j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    int res[m][b];
    for(int i = 0; i < m;i++){
        for(int j = 0;j < b;j++){
            int tot = 0;
            for(int k = 0;k < n;k++){
                tot += arr[i][k] * ar[k][j];
                // cout << "arr[i][k] ar[k][j]: " << arr[i][k] << " " << ar[k][j] << " " << i << " -- " << j << " -- " <<  k << endl;
            }
            res[i][j] = tot;
        }
    }

    cout << "Result\n";
    for(int i = 0;i < m;i++){
        for(int j = 0;j < b;j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

}
