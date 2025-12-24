
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long lst[n + 10];
    for(int i = 0;i < n;i++){
        cin >> lst[i];
    }
    long long total = 0;

    sort(lst,lst+n);

    for(int i = 0;i < n;i++){
        total += lst[i];
    }
    cout << lst[0] << " " << lst[n-1] << " " << total << endl;
	return 0;
}
