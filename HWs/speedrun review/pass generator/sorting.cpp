#include <bits/stdc++.h>
using namespace std;

bool cmp(int &a, int &b){
    return a > b;
}
int main(){
    vector<int> v;
    for(int i = 0;i < 10;i++){
        v.push_back(i);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i : v){
        cout << i << " ";
    }
}
