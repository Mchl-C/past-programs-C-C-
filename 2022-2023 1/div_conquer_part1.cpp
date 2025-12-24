// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;


vector <vector<int>> con; //container
void fill(int n,int k){
	while(n > 0){
		vector <int> level;
		if(n >= k){
			level.push_back(k);
			n -= k;
		}
		else{
			level.push_back(n);
			n = 0;
		}
		con.push_back(level);
	}
}

int main() {
	int n;
	cin >> n;

	fill(n,2);
	for(int s = 0;s < con.size();s++){
		for(int h = 0;h < con[s].size();h++){
			cout << con[s][h];
		}
		cout << endl;
	}
}
