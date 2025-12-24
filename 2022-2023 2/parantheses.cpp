// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {

	string st;

	int t; cin>>t;
	cin.ignore();

	for(int x = 0;x < t;x++){
		stack <char> s;
		getline(cin,st);

		int found = st.find(" ");
		while(found < st.size()){
			st.erase(found,1);
			found = st.find(" ");
		}

		bool correct = true;
		for(int i = 0;i < st.size();i++){
			if(st[i] == '(' || st[i] == '['){
				// cout << " add ";
				s.push(st[i]);
			}
			else if(!s.empty()){
				if(st[i] == ')' && s.top() == '('){
					// cout << " pop ) \n";
					s.pop();
				}
				else if(st[i] == ']' && s.top() == '['){
					// cout << " pop ] \n";
					s.pop();
				}
				else{
					// cout << "false" << endl;
					correct = false;
					break;
				}
			}
			else{
				// cout << "false" << endl;
				correct = false;
				break;
			}

			if(i == st.size() - 1){
				if(!s.empty()){
					correct = false;
				}
				break;
			}
		}

		if(correct){
			cout << "Yes" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}
}
