// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int arr[1000];

void g(int x){
    for(int i = 0;i < x;i++){
        for(int j = i + 1;j < x;j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
}

int main() {
	int num;
    cin >> num;

    for(int i = 0;i < num;i++){
        cin >> arr[i];
    }
    g(num);

	return 0;
}
