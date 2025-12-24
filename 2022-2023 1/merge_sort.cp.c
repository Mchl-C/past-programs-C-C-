// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

void print_v(vector<int> v){
	for(int i : v){
		cout  << i << " ";
	}
	cout << endl;
}

void merge(vector<int> v, int l1, int r1, int l2, int r2 ){
	vector <int> cont;
	int L1 = l1;
	int L2 = l2;

	while(L1 <= r1 || L2 <= r2){
		if(v[L1] <= v[L2]){
			cont.pb(v[L1]);
			L1 ++;
		}
		else{
			cont.pb(v[L2]);
			L2 ++;
		}
	}

	while(L1 <= r1){
		cont.pb(v[L1]);
		L1 ++;
	}
	while(L2 <= r2){
		cont.pb(v[L2]);
		L2 ++;
	}

	for(int i = 0;i < cont.size();i++){
		v[l1 + i] = cont[i];
	}
}

int mergesort(vector<int> v, int left, int right){
	if(left == right){
		return v[left];
	}
	else{
		int mid = (left + right)/2;
		return mergesort(v, left, mid);
		return mergesort(v, mid + 1, right);
		merge(v, left, mid, mid + 1, right);
	}
	return 0;
}



int main() {
	fastio

	int n;
	vector <int> v;
	while(cin >> n){
		v.pb(n);
	}
	mergesort(v, 0, v.size() - 1);
	print_v(v);
}
