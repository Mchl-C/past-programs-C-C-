#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		char ch = s[i];
		if(ch == 'e'){
			cout << "ee";
		}
		else{
			cout << s[i];
		}
	}
	return 0;
}
