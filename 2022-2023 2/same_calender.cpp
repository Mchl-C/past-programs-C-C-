// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int days(int year){
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		return 366;
	}
	return 365;
}

int main() {
	int n;
	cin >> n;

	int fy = n;
	int day = 0;

	while(true){
		n ++;
        day = (day + (days(n)) % 7) % 7;
        if(day == 0 && days(n) == days(fy)){
            cout << n << endl;
            break;
        }
    }
}
