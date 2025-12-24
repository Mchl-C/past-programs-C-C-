#include <iostream>
#include <string>
using namespace std;

int palindrom(string word){
	int len = word.size();
	string sub = word.substr(1,len-2);
	if(len == 1){return true;}
	if(len == 2){
		if(word[0] == word[1]){
			return 1;
	 	}
	  	else{
			return 0;
		}
	}
	return word[0] == word[len-1] && palindrom(sub);
}
int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string input;
	cin >> input;
	bool result = palindrom(input);
	result ? cout << "YA" << endl : cout << "BUKAN" << endl;
	return 0;
}
