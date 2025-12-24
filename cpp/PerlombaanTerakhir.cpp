#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string contest_name;
	int count = 0;
	getline(cin,contest_name);

	for(int i = 0;i < contest_name.size();i++){
		if(contest_name[i] == 'O'){
			count ++;
		}
	}
	count == 1 ? cout << "Ya\n" : cout << "Tidak\n";
	return 0;
}
