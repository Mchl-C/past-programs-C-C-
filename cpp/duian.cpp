#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0);
    long long a,b;
    cin >> a >> b;
    cout << min(a,b) * 2;
    return 0;
}
