// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++){
		int a,b,x,y;
		cin >> a >> b >> x >> y;
		x ++; y ++;

		int area_1 = a * (y - 1);
		int area_2 = a * (b - y);
		int area_3 = (x - 1) * b;
		int area_4 = (a - x) * b;

		int max_area = max(max(area_1, area_2), max(area_3,area_4));
		cout << max_area << endl;
	}
}
