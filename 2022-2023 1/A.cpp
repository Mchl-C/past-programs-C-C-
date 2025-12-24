#include <bits/stdc++.h>
using namespace std;

// int check(int num){

//     return prime;
// }
int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    cin >> a;
    for(int i = 0;i < a;i++){
        cin >> b;
        int total = 0;
        for(int x = 1;x < b;x++){
            cout << "c" << endl;
            bool prime = true;
            for(int y = 0;y <= sqrt(x);y++){
                if(x % y == 0){
                    prime = false;

                }
            }
            cout << "a " << endl;
            if(prime){
                cout << x << endl;
            }
        }
    }
    return 0;
}
