// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	deque <int> d;
	int n;
	cin >> n;

	for(int i = 0;i < n;i++){
		string s;
		int num;

		cin >> s;

		if(s == "push_back" || s == "push_front"){
			cin >> num;
		}

		if(s == "push_back"){
			d.push_back(num);
		}
		else if(s == "push_front"){
			d.push_front(num);
		}

		if(s == "pop_front"){
			d.pop_front();
		}
		else if(s == "pop_back"){
			d.pop_back();
		}
	}

	for(int x : d){
		cout << x << endl;
	}
}
