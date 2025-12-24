#include <iostream>
#include <string>
using namespace std;

bool res(string pattern, string word){
	int found = pattern.find("*");
	string begining,end,word1, word2;
	if(pattern.size() - 1 > word.size()){return false;}

	begining = pattern.substr(0,found);
	end = pattern.substr(found + 1);

	word1 = word.substr(0,begining.size());
	word2 = word.substr(word.size() - end.size(), end.size());

	return begining == word1 && end == word2;
}
int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string pattern,word;
	int num;
	cin >> pattern;
	cin >> num;
	for(int i = 0;i < num;i++){
		cin >> word;
		if(res(pattern, word)){
			cout << word << endl;
		}
	}
	return 0;
}
