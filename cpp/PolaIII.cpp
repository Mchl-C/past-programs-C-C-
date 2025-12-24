#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,num = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        for(int x = 0;x <= i;x++){
            cout << num;
            num == 9 ? num = -1 : num = num;
            num ++;
        }
        cout << endl;
    }
    return 0;
}
