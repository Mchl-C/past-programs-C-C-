#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,p,a = 0,total = 0;
    cin >> n;
    for(int i = 0;i < n*2;i++){
        cin >> p;
        a += p;
    }
    total = n*a;
    cout << total << endl;
}
