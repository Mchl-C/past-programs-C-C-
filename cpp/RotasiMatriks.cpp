#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    cin >> a >> b;
    int arr[a][b] = {};

    for(int y = 0;y < a;y++){
        for(int x = 0;x < b;x++){
            cin >> arr[y][x];
        }
    }

    for(int x = 0;x < b;x++){
        for(int y = 0;y < a;y++){
            cout << arr[a - y - 1][x] << " ";
        }
        cout << endl;
    }
    return 0;
}
