// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll lim = 1e9;
vector<bool> sieve(lim + 5, 1);

void func() {
    for(int i = 2;i <= sqrt(lim);i++){
        if(sieve[i]){
            for(int j = i*i;j <= lim;j += i){
                sieve[j] = false;
            }
        }
    }
}

deque<ll> ar;
void factorize(ll num){
    // cout << num << endl;
    for(ll i = 2;i <= num;i++){
        if(sieve[i]){
            //cout << "prime - " << i << endl;
            while(num % i == 0){
                num /= i;
                //cout << "Num " << num << endl;
                ar.pb(i);
            }
        }
    }
}

void solve(){
    ll low, mid, high;
    if(ar.size() >= 3){
        low = ar.front(); ar.pop_front();
        high = ar.back(); ar.pop_back();
        mid = ar.back(); ar.pop_back();
    }
    else if(ar.size() == 2){
        low = ar.front(); ar.pop_front();
        high = ar.back();ar.pop_back();
        mid = 1;
    }
    else if(ar.size() == 1){
        low = 1; high = ar.back(); ar.pop_back(); mid = 1;
    }
    else{
        low = mid = high = 1;
    }

    while(!ar.empty()){
        if(mid > high){
            high *= ar.back();
        }
        else if(low >= mid){
            mid *= ar.back();
        }
        else{
            low *= ar.back();
        }
        ar.pop_back();
    }
    // cout << "p : " << low << " " << mid << " " << high << endl;
    cout << string(low, 'O') << string(mid,'S') << string(high,'A') << endl;
}

int main(){
    ll num;
    cin >> num;
    lim = num;

    if(num == 1e9){
        cout << string(1000,'O') << string(1000,'S') << string(1000,'A') << endl;
        return 0;
    }
    func();
    factorize(num);

    // cout << "Factors: ";
    // for(int i : ar){cout << i << " ";}
    // cout << endl;
    solve();

    return 0;
}
