// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back

vector<int> v;
void print_v(vector<int> arr){
	for(int i : arr){
		cout  << i << " ";
	}
	cout << endl;
}

void merge(int l1, int r1, int l2, int r2 ){
	vector <int> cont;
	int L1 = l1;
	int L2 = l2;

	while(L1 <= r1 &&L2 <= r2){
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

int mergesort(int left, int right){
	if(left == right){
		return 0;
	}
	else{
		int mid = (left + right)/2;
		mergesort(left, mid);
		mergesort(mid + 1, right);
		merge(left, mid, mid + 1, right);
        return 0;
	}
}



int main() {
	fastio

	int n;
	while(cin >> n){
		v.pb(n);
	}
	mergesort(0, v.size() - 1);
	print_v(v);
}
