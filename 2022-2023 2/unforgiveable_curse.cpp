// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

bool check(char a[],char b[], int n){
	sort(a,a + n);
	sort(b,b + n);
	string c = a,d = b;
	return (c == d);
}

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++){
		int n, k;
		char a[n + 10],b[n + 10];
		char aa[n + 10], bb[n + 10];
		cin >> n >> k;
		cin >> a >> b;

		memcpy(aa,a,n);
		memcpy(bb,b,n);

		if(check(a,b,n)){
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
						if(aa[i] != bb[i]){
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
