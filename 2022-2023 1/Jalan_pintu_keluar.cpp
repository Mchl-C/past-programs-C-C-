#include <bits/stdc++.h>
using namespace std;

int res(int n, int m){
    if(n == 1 || m == 1){
        return 1;
    }
    return res(n - 1, m) + res(n, m-1);
}

int main() {
	int n,m;
    cin >> n >> m;
    cout << res(n, m) << endl;

}
