// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int x = 0;x < t;x++){
		int n,d;
		cin >> n >> d;
		string s;
		cin >> s;

		bool used = false;
		for(int i = 0;i < n;i++){
			char c = s[i];
			string ch = "";
			ch += c;

			int num = stoi(ch);
			if(d > num){
				s.insert(i,to_string(d));
				used = true;
				break;
			}
		}
		if(!used){
			s += to_string(d);
		}

		cout << s << endl;
	}
	return 0;
}
