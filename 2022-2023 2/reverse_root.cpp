// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	stack <double> s;
	double num;
	while(cin >> num){
		s.push(num);
	}

	double limit = 1e-6;

	while(s.size() >= 1){
		double n = s.top();
		s.pop();

		if(n == 0){
			cout << 0.0000 << endl;
			continue;
		}

		double high = n, low = 0, mid = (high + low)/2;

		while(high - low >= limit){
			mid = (high + low)/2;
			double l = mid*mid;
			// cout<<mid<<endl;

			if(l > n){
				high = mid;
			}
			else if(l < n){
				low = mid;
			}
			else{
				break;
			}
		}
		cout << setprecision(4) << fixed << mid << endl;
	}

	return 0;
}
