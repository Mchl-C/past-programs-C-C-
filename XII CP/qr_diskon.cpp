// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool comp(int a, int b){
	return a > b;
}

int main() {
	int n,x,y;
	cin >> n >> x >> y;

	ll arr[n + 10], ar[n + 10];
	int idx = 0;

	for(int i = 0; i < n;i++){
		cin >> arr[i];
	}

	for(int i = 0; i < n;i++){
		cin >> ar[i];
	}

	sort(arr, arr + n, comp);
	sort(ar, ar + n, comp);

	for(int i = 0;i < n;i++){
		if(arr[i] >= x && ar[i] >= y) idx ++;
		else break;
	}

	if(idx < n) if(arr[idx] + arr[idx + 1] >= x && ar[idx] + ar[idx + 1] >= y) idx ++;
	cout << idx << endl;

}
