#include <bits/stdc++.h>
using namespace std;

int main() {
	double chance;
    cin >> chance;

    chance /= 100;
    if(chance == 0){
        cout << 0 << endl;
        return 0;
    }
    cout << setprecision(7) << fixed << 1/(2-chance) << endl;

    return 0;
}
