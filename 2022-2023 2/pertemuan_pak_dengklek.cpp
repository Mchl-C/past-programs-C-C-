// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string a, string b){
	if(a.size() != b.size()){
		return a.size() < b.size();
	}
	return a < b;
}

int main(){
	ll n;
	cin >> n;
	string arr[n + 10];
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}

	sort(arr, arr + n, cmp);
	for(int i = 0;i < n;i++){
		cout << arr[i] << endl;
	}
}

