// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

typedef priority_queue <int, vector<int>, greater<int>> pq;

int main() {
	int t, money;
	pq p;

	cin >> t >> money;
	for(int i = 0;i < t;i++){
		int n, min_cost = 1e7;

		cin >> n;
		for(int x = 0;x < n;x++){
			int num;
			cin >> num;
			min_cost = min(min_cost, num);
		}

		if(min_cost < money){
			p.push(i + 1);
		}
	}

	if(p.empty()){
		cout << 0 << endl;
	}
	else{
		cout << p.size() << endl;
		while(!p.empty()){
			cout << p.top() << " ";
			p.pop();
		}
		cout << endl;
	}
}
