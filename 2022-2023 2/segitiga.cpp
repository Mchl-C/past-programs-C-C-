// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[5];
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr,arr+3);
	if(arr[0] + arr[1] > arr[2]){
		cout << "segitiga\n";
	}
	else{
		cout << "bukan segitiga\n";
	}

	return 0;
}
