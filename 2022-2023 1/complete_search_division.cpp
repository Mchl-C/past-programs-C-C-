// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fastio ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int n;
bool found = false;

bool check(int res, vector<bool> pernah){
	while(res>0){
		if(pernah[res%10]) return 0;
		pernah[res%10]=1;
		res/=10;
	}
	return 1;
}
void perm(int depth, vector<bool> pernah, int var){
	if(var * pow(10,(5-depth)) * n >= 100000) return;
	if(depth >= 5){
		int res = var * n;
		int size = log10(var) +1;
		int size2 = log10(res) +1;
		if(check(res,pernah) && !(size == 4 && size2 == 4)) {
			cout << res << " / ";
			if(size!=5) cout << '0';
			cout << var  << " = " << n << endl;
			found = true;
		}
	}
	else{
		for(int i = 0; i <= 9;i++){
			if(!pernah[i]){
				pernah[i] = true;
				perm(depth + 1, pernah, var*10+i);
				pernah[i] = false;
			}
		}
	}
}

int main() {
    fastio
	cin >> n;
	if(n != 0){
		vector<bool> pernah(10, false);
		found = false;
		perm(0, pernah, 0);
		if(!found) cout << "There are no solutions for " << n << "." << endl;
	}

	while(cin >> n && n!=0) {
		cout << endl;
		vector<bool> pernah(10, false);
		found = false;
		perm(0, pernah, 0);
		if(!found) cout << "There are no solutions for " << n << "." << endl;
	}
}

// ACCCCCCCCCCCCCCCCCCCCC
