// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

char arr[2000];

int main() {
	int n, q;
    cin >> n >> q;
    cin >> arr;

    for(int i = 0;i < q;i++){
        int choice, L, R;
        cin >> choice >> L >> R;
        if(choice == 1){
            swap(arr[L - 1], arr[R - 1]);
        }
        else{
            reverse(arr + L - 1, arr + R);
        }
    }

    cout << arr << endl;

	return 0;
}
