// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, ans = 0;
    cin >> a >> b >> c;

    if(a == b || b == c || a == c){
        ans = -1;
    }
    else{
        while(a > b || b > c){
            if(b > c){
                swap(b, c);
                ans ++;
            }
            if(a > b){
                swap(a, b);
                ans ++;
            }
        }
    }
    cout << ans << endl;

}
