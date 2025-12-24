// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
    cin >> a >> b;

    int limit = 1000005;
    int c = (a - 1)*b + 1;
    bool arr[limit] = {false};

    for(int i = 2;i <= limit;i ++){
        if(!arr[i]){
            int p = i*2;
            while(p <= limit){
                arr[p] = true;
                p += i;
            }
        }
    }

    int index = 1, cnum = 2, up = 0;
    int idx = up*b + 1;

    for(int x = cnum;x <= limit;x++){
        // cout << index << " " << idx << endl;
        if(up >= a){
            break;
        }

        if(index == idx && !arr[x]){
            cout << x << endl;
            index ++;
            up ++;
            idx = up*b + 1;
            continue;
        }
        else if(!arr[x]){
            index ++;
        }
        cnum = x;
    }




    return 0;
}
