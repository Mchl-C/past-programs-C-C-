#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t;
    cin >> t;
    for(int x = 0;x < t;x++){
        long long n,fn,sn,mn,total = 0;
        cin >> n;
        fn = n/4;sn = n/7;mn = n/28;
        total += fn*(4+4*fn)/2;
        total += sn*(7+7*sn)/2;
        total -= mn*(28+28*mn)/2;
        cout << total << endl;
    }
    return 0;
}
