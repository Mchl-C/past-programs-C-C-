// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	for(int i = 0;i < n;i++){
		deque <int> d;
		bool beautiful = false;

		int a,b;
		cin >> a >> b;
		d.push_back(a);
		d.push_back(b);

		int c,e;
		cin >> c >> e;
		d.push_back(e);
		d.push_back(c);

		for(int x = 0;x < 4;x++){
			bool con1 = d[0] < d[1] && d[0] < d[3];
			bool con2 = d[1] < d[2];
			bool con3 = d[3] < d[2];

			if(con1 && con2 && con3){
				beautiful = true;
				break;
			}
			else{
				d.push_front(d.back());
				d.pop_back();
			}
		}

		if(beautiful){
			cout << "Yes\n";
		}
		else{
			cout << "No\n";
		}
	}
}
