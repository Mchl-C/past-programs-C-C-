#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,m,d;
    bool printed = false;
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        cin >> d;
        if(d == m && printed == false){
            cout << i << endl;
            printed = true;
        }
    }
    if(!printed) cout << -1 << endl;
    return 0;
}
