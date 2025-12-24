// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

void printQueue(queue<char> q)
{
	//printing content of queue
	while (!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}
	cout<<endl;
}

int main() {
	int n;
	queue <char> q;

	cin >> n;
	for(int i = 0;i < n;i++){
		int ch = 65 + i;
		char chr = ch;
		q.push(chr);
	}

	int current_elements = 0, max_elements = n;
	int turns = 0, times = 0;
	bool first = true;
	while(q.size() > 1){
		if(current_elements == max_elements && times == 2 && !first){
			q.pop();
			max_elements --;
			times = 0;
			first = true;
		}
		else if(current_elements == max_elements){
			first = true;
		}

		if(times == 1 && first){
			cout << "Pop : " << q.front() << endl;
			printQueue(q);
			q.pop();

			max_elements --;
			times = 0;
			first = false;
		}
		else if(times == 2 && !first){
			cout << "Pop : " << q.front() << endl;
			printQueue(q);
			q.pop();

			max_elements --;
			times = 0;
		}
		else{
			q.push(q.front());
			q.pop();

			times ++;
			current_elements ++;
		}
		turns ++;
		cout << turns << " , " << current_elements << " , " << max_elements << endl;
		printQueue(q);
	}

	cout << q.size() << endl;
	for(int i = 0; i < n;i++){
		cout << q.front() << endl;
		q.pop();
	}
}

// Find best position
