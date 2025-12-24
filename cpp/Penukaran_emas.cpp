#include <iostream>
using namespace std;

int max_gold(int n){
    if(n <= 6){return n;}
    return max(max_gold(n/2) + max_gold(n/3) + max_gold(n/4),n);
}
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    cout << max_gold(n) << endl;

    return 0;
}
