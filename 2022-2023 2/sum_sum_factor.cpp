// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int g(int x){
    int tot = 0;
    for(int i = 1;i <= x;i++){
        if(x % i == 0){
            tot ++;
        }
    }
    return tot;
}

int main() {
	int num;
    cin >> num;

    int tot = 0;
    for(int i = 1;i <= num;i++){
        tot += g(i);
    }
    cout << tot << endl;

	return 0;
}
