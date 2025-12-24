#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long total = 0,n;
    cin >> n;

    while(n > 0){
        n /= 5;
        total += n;
    }

    cout << total << endl;
}
