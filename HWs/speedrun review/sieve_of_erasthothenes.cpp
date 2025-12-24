#include <bits/stdc++.h>
using namespace std;

int main(){
    int lim = 1001;
    bool prime[lim]; memset(prime, 1, lim);
    for(int i = 2;i*i < lim;i++){
        for(int j = i * i;j < lim;j += i){
            prime[j] = 0;
        }
    }

    int tot = 0;
    for(int i = 2;i <= 1000;i++){
        if(prime[i]){
            cout << i << " ";
            tot ++;
        }
    }
    cout << endl;
    cout << tot << endl;
    return 0;
}
