#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x,y;
    cin >> y >> x;
    for(int i = 1;i <= y;i++){
        for(int a = 1;a <= x;a++){
            if(i % 2 == 1){
                cout << 'W';
            }
            else if(i % 2 == 0){
                cout << 'B';
            }
        }
        cout << endl;
    }
}
