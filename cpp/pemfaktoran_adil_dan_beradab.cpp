#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,total = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            total ++;
        }
    }
    total == 5 ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
