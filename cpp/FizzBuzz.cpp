#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int l,r,k,x;
    cin >> l >> r >> k;
    int num[k];
    string s[2];
    for(int i = 0;i < k;i++){
        cin >> num[i];
        cin >> s[i];
    }
    for(int i = l;i <= r;i++){
        bool printed = false,space = true;
        for(int x = 0;x < k;x++){
            if(i % num[x] == 0){
                printed = true;
                cout << s[x];
            }
        }
        if(!printed){cout << i << endl;space = false;}
        if(space){cout << endl;}
    }
    return 0;
}
