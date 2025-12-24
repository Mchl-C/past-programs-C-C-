// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

double limit = 1e-6;

int main() {
	double p,q,r,s,t,u;

	while(cin >> p >> q >> r >> s >> t >> u){
		double upper = 1, lower = 0, mid = (upper + lower)/2;
		double x = mid;
		double res = p * exp(-x) + q * sin(x) + r * cos(x) +  s * tan(x) + t * x * x + u;

		while(res > limit || res < 0){
			mid = (upper + lower)/2;
			double x = mid;
			double res = p * exp(-x) + q * sin(x) + r * cos(x) +  s * tan(x) + t * x * x + u;

			if(res <= limit && res >= 0){
				cout << setprecision(4) << fixed << mid << endl;
				break;
			}
			else if(res > limit){
				lower = mid;
			}
			else if(res < 0){
				upper = mid;
			}

			if(mid == 1){
				cout << "No solution\n";
				break;
			}
			// cout << mid << " " << res << endl;
		}
	}

	return 0;
}
// my previous submit wont worked
