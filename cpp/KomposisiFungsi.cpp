#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a,b,k,x;
    cin >> a >> b >> k >> x;

    for(int i = 0;i < k;i++){
        x = abs(a*x + b);
    }
    cout << x << endl;
    return 0;
}
