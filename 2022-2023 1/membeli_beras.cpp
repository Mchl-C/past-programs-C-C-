// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct duo{
	double first, second;
};

bool cmp(duo x, duo y){
	return x.second > y.second;
}

int main(){
	ll n, x;
	double price = 0;
	cin >> n >> x;
	duo arr[n + 10];

	for(int i = 0;i < n;i++){
		cin >> arr[i].first;
	}
	for(int i = 0;i < n;i++){
		cin >> arr[i].second;
		arr[i].second /= arr[i].first;
	}

	sort(arr, arr + n, cmp);
	// for(int i = 0;i < n;i++){
	// 	cout << arr[i].first << " " << arr[i].second << endl;
	// }

	for(int i = 0;i < n;i++){
		if(x <= 0){
			break;
		}
		if(arr[i].first < x){
			price += arr[i].first * arr[i].second;
			x -= arr[i].first;
		}
		else{
			price += x * arr[i].second;
			x = 0;
		}
	}

	cout << fixed << setprecision(5) << price << endl;
}

