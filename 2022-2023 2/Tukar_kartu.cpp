// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n + 10];
	int turns = 0;
	int index;
	cin >> arr[0];

	for(int i = 1;i < n;i++){
		cin >> arr[i];
		index = i;
		while(arr[index] < arr[index - 1] && index > 0){
			int change = arr[index - 1];
			arr[index - 1] = arr[index];
			arr[index] = change;
			index --;
			turns ++;
		}
	}

	cout << turns << endl;
}
