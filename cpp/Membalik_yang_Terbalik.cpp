#include <iostream>
using namespace std;

int reverse(int x){
    int p = x,res = 0;
    while(p > 0){
        res = (res * 10) + (p % 10);
        p /= 10;
    }
    return res;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a,b,sum;

    cin >> a >> b;
    sum = reverse(a) + reverse(b);
    cout << reverse(sum);

    return 0;
}
