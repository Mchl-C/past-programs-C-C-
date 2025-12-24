// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n){
		if(n == 0){
			break;
		}
		else if(n >= 2){
			queue <int> q;
			for(int i = 1;i <= n;i++){
				q.push(i);
			}
			/*
			for(int i = 0;i < n;i++){
				cout << q.front() << endl;
				q.pop();
			}
			*/
			cout << "Discarded cards: ";
			while(q.size() >= 2){
				if(q.size() > 2){
					cout << q.front() << ", ";
				}
				else{
					cout << q.front();
				}
				q.pop();
				q.push(q.front());
				q.pop();
			}
			cout << endl << "Remaining card: " << q.front() << endl;
		}
		else{
			cout << "Discarded cards:" << endl;
			cout << "Remaining card: 1" << endl;
		}
	}
}
