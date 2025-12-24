// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool check(int a[],int b[]){
	for(int v = 97;v <= 122;v++){
		if(a[v] != b[v]){
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;

	for(int z = 0;z < t;z++){
		int n, k;
		string a,b;

		cin >> n >> k;

		int ceka[200];
		int cekb[200];
		memset(ceka, 0, sizeof(ceka));
		memset(cekb, 0, sizeof(cekb));

		cin >> a >> b;
		for(int x = 0;x < n;x++){
			char chr = a[x];
			char chrb = b[x];
			int p = chr;
			int q = chrb;

			ceka[p] ++;
			cekb[q] ++;
		}


		if(check(ceka, cekb)){
			if(n >= 6){
				cout << "Yes\n";
			}
			else{
				bool cek_box[n + 10];
				memset(cek_box,0,n);
				for(int i = 0;i < n;i++){
					if(i - 3 >= 0){
						cek_box[i - 3] = true;
					}
					if(i - 4 >= 0){
						cek_box[i - 4] = true;
					}
					cek_box[i + 3] = true;
					cek_box[i + 4] = true;
				}

				bool correct = true;
				for(int i = 0;i < n;i++){
					if(!cek_box[i]){
						if(a[i] != b[i]){
							cout << "No\n";
							correct = false;
							break;
						}
					}
				}
				if(correct){
					cout << "Yes\n";
				}
			}
		}
		else{
			cout << "No\n";
		}
	}

	return 0;
}
