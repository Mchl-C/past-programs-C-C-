// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	while(cin >> n){
		if(n == 0){
			break;
		}

		while(true){
			bool chel = false;
			int cn = 1;
			stack <int> s;
			bool br = false;

			for(int i = 0;i < n;i++){
				int np;
				cin >> np;
				// cout << np << " ";
				if(np == 0){
					chel = true;
					break;
				}
				for(int x = 0;x <= n;x++){
					if(!s.empty() && s.top() == np){
						// cout << "pop " << s.top() << endl;
						s.pop();
						break;
					}
					else{
						if(cn > n){
							br = true;
							break;
						}
						s.push(cn);
						// cout << "add " << cn << endl;
						cn ++;
					}
					// cout << s.top() << " " << cn << " " << n << endl;
					// cout << "s : " << s.top() << endl;
				}
			}
			s.size() > 0 ? br = true : br = false;

			if(chel){break;}
			if(br){cout << "No";}
			else{cout << "Yes";}
			cout << endl;
		}
		cout << endl;

	}
}
