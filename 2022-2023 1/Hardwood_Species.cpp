// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	bool fs = true;
	cout << t << endl;
	for(int i = 0;i < t;i++){
		map <string, int> lst;
		string tree;
		int total = 0;

		while(getline(cin,tree)){
			if(fs){
				fs = false;
				continue;
			}
			else{
				if(tree.size() == 0){
					// cout << "empty line \n";
					break;
				}
			}
			// cout << "T : " << tree << " ";
			if(lst.count(tree) == 0){
				// cout << "1 : " << tree << " ";
				lst[tree] = 1;
			}
			else{
				// cout << "++ : " << lst[tree] << " ";
				lst[tree] ++;
			}
			// cout << endl;
			total ++;
		}

		map <string, int> ::iterator it;
		for(it = lst.begin();it != lst.end();it++){
			double res = it->second*1.0/total*1.0;
			cout << it->first << " " << fixed << setprecision(4) << res*100 << endl;
		}
		cout << endl;
		// cout << "tot : " << total << endl;
	}
	return 0;
}
