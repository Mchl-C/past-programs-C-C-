#include <bits/stdc++.h>
using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    vector <int> w = {10, 30, 30, 30};
    discrete_distribution<> d(w.begin(), w.end());
    for(int i = 0;i < 100;i++){
        cout << d(gen) << endl;
    }
    return 0;
}
