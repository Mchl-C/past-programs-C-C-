#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,total = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> a;
        total += a;
    }
    if(total % 2 == 0){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
    }
    return 0;
}
