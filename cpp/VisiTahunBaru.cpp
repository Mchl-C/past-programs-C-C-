#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s,t,s1,t1;
	cin >> s >> t;

	for(int i = 0;i < s.size();i++){
		int ascii = s[i];
		if(ascii >= 97){
			ascii -= 32;
		}
		char c = ascii;
		s1 += c;
	}

	for(int i = 0;i < t.size();i++){
		int ascii = t[i];
		if(ascii >= 97){
			ascii -= 32;
		}
		char c = ascii;
		t1 += c;
	}

	s1 == t1 ? cout << "20/20\n" : cout << "x_x\n";
	return 0;
}
