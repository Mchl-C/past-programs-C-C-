// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[100010], n;

ll pos(ll k){
	ll low = 0, high = n - 1, res = -1;

	while(low <= high){
		ll mid = (low + high)/2;
		if(arr[mid] <= k){
			res = mid;
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return res;
}

int main(){
	cin >> n;

	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}

	ll q;
	cin >> q;

	for(int i = 0;i < q;i++){
		ll x,y;
		cin >> x >> y;
		cout << pos(y) - pos(x) << endl;
	}
}

