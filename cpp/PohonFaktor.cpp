#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;

    for(int i = 2;i <= 1000000;i++){
        if(n % i == 0){
            int pow = 0;
            cout << i;
            while(n % i == 0){
                pow ++;
                n /= i;
            }
            pow > 1 ? cout << "^" << pow : cout << "";
            n > 1 ? cout << " x " : cout << "";
        }
    }
    return 0;
}
