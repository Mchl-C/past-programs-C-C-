// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long

void print_v(vector<int> v){
	for(int i : v){
		cout << i << " ";
	}
	cout << endl;
}

bool next_combination(vector<int>& v, int maxValue) {
    for (int i = v.size() - 1; i >= 0; --i) {
        if (v[i] < maxValue - v.size() + i + 1) {
            ++v[i];
            for (int j = i + 1; j < v.size(); ++j) {
                v[j] = v[j - 1] + 1;
            }
            return true;
        }
    }
    return false;
}


int main() {
	fastio

	bool first = true;
	int cas = 1;
	int n, b, m;
	while(cin >> n >> b && n && b){
		int arr[n + 10];

		for(int i = 0;i < n;i++){
			cin >> arr[i];
		}

		vector <vector<int>> v;
		cin >> m;
		for(int i = 0;i < m;i++){
			int t;
			cin >> t;
			vector <int> tmp;

			for(int x = 0;x < t;x++){
				int domain;
				cin >> domain;
				tmp.pb(domain);
			}
			int value;
			cin >> value;
			tmp.pb(value);

			v.pb(tmp);
		}

		vector <int> ar;
		for(int i = 0;i < b;i++){
			ar.pb(i);
		}

		int customers = 0;
		int loc[b + 10];

		do{
			int max_value = 0;

			for(int i = 0;i < ar.size();i++){
				max_value += arr[ar[i]];
			}

			for(int i = 0;i < v.size();i++){
				int minus = 0;
				for(int x = 0;x < v[i].size() - 1;x++){
					auto it = find(ar.begin(), ar.end(), v[i][x] - 1);
					if(it != ar.end()){
						minus ++;
					}
				}
				if(minus > 1){
					// cout << "Minus : " << (minus - 1) << " * " << (v[i][v[i].size() - 1]) << endl;
					max_value -= (minus - 1)*(v[i][v[i].size() - 1]);
				}
			}

			// cout << "Max_value : " << max_value << endl;

			if(max_value > customers){
				customers = max_value;
				for(int x = 0;x < b;x++) loc[x] = ar[x] + 1;
			}
			else if(max_value == customers){
				// cout << "Value same \n";
				for(int i = 0;i < b;i++){
					if(loc[i] > ar[i] + 1){
						for(int x = 0;x < b;x++) loc[x] = ar[x] + 1;
						break;
					}
					else if(loc[i] < ar[i]){
						break;
					}
				}
			}
		}
		while(next_combination(ar, n - 1));

		if(first) first = false;
		else cout << endl;

		cout << "Case Number " << cas << endl;
		cout << "Number of Customers: " << customers << endl;
		cout << "Locations recommended: ";
		for(int i = 0;i < b - 1;i++) cout << loc[i] << " ";
		cout << loc[b - 1] << endl;

		cas ++;
	}
}
