// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int y,x;
    cin >> y >> x;

    int arr[y][x];
    for(int i = 0;i < y;i++){
        for(int j = 0;j < x;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0;i < x;i++){
        for(int j = 0;j < y;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
	return 0;
}
