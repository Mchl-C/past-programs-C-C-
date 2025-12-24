// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void print(deque <char> p){
	// cout << "size : " << p.size() << endl;
	// cout << "lst : ";
	int siz = p.size();
	for(int z = 0;z < siz;z++){
		cout << p.front();
		p.pop_front();
	}
	cout << endl;
}

int main(){
	string text;

	while(getline(cin, text)){
		deque <char> res;
		// cout << text << endl;
		for(int i = 0;i < text.size();i++){
			if(text[i] == '['){
				i ++;
				string word = "";
				// cout << "start : " << text[i] << endl;
				while(text[i] != '[' && text[i] != ']'){
					// cout << text[i] << " " << word << endl;
					word += text[i];
					i ++;
					if(i == text.size()){
						break;
					}
				}

				// cout << "Word : " << word << endl;
				for(int x = word.size() - 1;x >= 0;x--){
					// cout << "pf : " << word[x] << endl;
					res.push_front(word[x]);
				}
				i--;
			}
			else if(text[i] == ']'){//nih w ngechit hehe
				text = text;
			}
			else{
				res.push_back(text[i]);
			}
		}
		print(res);
	}
	return 0;
}
