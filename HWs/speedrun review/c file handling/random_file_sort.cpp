#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    srand(time(NULL));
    vector<int> v;
    for(int i = 0;i < 10;i++){
        v.pb(rand() % 100);
    }
    random_shuffle(v.begin(), v.end());
    for(int i : v){
        cout << v[i] << " ";
    }
    return 0;
}
