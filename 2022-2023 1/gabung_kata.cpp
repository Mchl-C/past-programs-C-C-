// Source: https://usaco.guide/general/io

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string a,b;
	cin >> a >> b;

	bool find = false;
	int limit = b.size();

	for(int i = 0;i < limit;i++){
		string sub = b.substr(0,b.size() - i);
		// cout << sub << endl;
		int found = a.find(sub);
		// cout << found << endl;

		if(found >= 0){
			string sb = b.substr(b.size() - i, i);
			a += sb;
			find = true;
			break;
		}
	}
	if(!find){
		a += b;
	}
	cout << a.size() << endl;
	return 0;
}
