#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++){
        for(int x = 0;x <= n-i-1;x++){
            cout << " ";
        }
        for(int x = 0;x < i;x++){
            cout << '*';
        }
        cout << endl;
    }
}
