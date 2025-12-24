#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n;
    bool yes = false;
    cin >> n;
    while(n > 1){
        if(n % 2 == 0){
            n /= 2;
        }
        else{
            break;
        }
    }
    n == 1 ? cout << "ya\n" : cout << "bukan\n";
    return 0;
}
