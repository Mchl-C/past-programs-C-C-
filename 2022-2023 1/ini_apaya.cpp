// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	char ch;
	cin >> ch;
	if(ch == '0'){
		cout << "nol\n";
	}
	else if(ch == '-'){
		cout << "bilangan bulat negatif\n";
	}
	else if(ch >= 49 && ch <= 57){
		cout << "bilangan bulat positif\n";
	}
	else{
		cout << "kata\n";
	}
	return 0;

}
