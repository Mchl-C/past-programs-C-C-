// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();

	for(int i = 0;i < t;i++){
		stack <int> s;
		string lst;
		getline(cin, lst);

		// cout << "size : " << lst.size() << endl;
		for(int i = 0;i < lst.size();i++){
			if(lst[i] == '(' || lst[i] == '['){
				s.push(lst[i]);
				// cout << "push : " << lst[i] << endl;
			}
			else if(!s.empty()){
				if((s.top() == '(' && lst[i] == ')') || (s.top() == '[' && lst[i] == ']')){
					s.pop();
				}
			}
			else{
				s.push(lst[i]);
				continue;
			}
		}

		if(s.size() == 0){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}

	return 0;
}
