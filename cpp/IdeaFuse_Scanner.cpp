#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,word;
	bool found = false;
	cin >> a;
	for(int i = 0;i < a.size();i++){
		word = a.substr(i,8);
		if(word == "ideafuse"){
			cout << i + 1 << endl;
			found = true;
			break;
		}
	}
	if(!found){cout << "-1" << endl;}
	return 0;
}
