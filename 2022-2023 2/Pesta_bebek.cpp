// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll find_idx(string arr[], ll size, string t){
	for(int p = 0;p < size; p++){
		if(arr[p] == t){
			return p;
		}
	}
}

int main(){
	ll n;
	cin >> n;
	string names[n + 10];

	for(int i = 0;i < n;i++){
		string name;
		cin >> name;

		names[i] = name;
		sort(names, names + i + 1);

		cout << find_idx(names, i + 1, name) + 1 << endl;
	}

}

