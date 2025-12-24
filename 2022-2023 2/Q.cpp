// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int dict(char apb){
    if(apb == 'o'){return 0;}
	if(apb == 'I'){return 1;}
	if(apb == 'V'){return 5;}
	if(apb == 'X'){return 10;}
	if(apb == 'L'){return 50;}
	if(apb == 'C'){return 100;}
	if(apb == 'D'){return 500;}
	if(apb == 'M'){return 1000;}
}

int to_num(string a){
	int total = 0;
	for(int i = 0;i < a.size()-1;i++){
		char c = a[i],d = a[i+1];
		if(dict(c) >= dict(d)){
			total += dict(c);
		}
		else if(dict(c) < dict(d)){
			total += dict(d) - dict(c);
			i++;
		}
		else{
			total += dict(c);
		}
	}
	return total;
}

string to_roman(int a){
	string romans[15] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int values[15] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string result = "";

	for (int i = 0; i < 13; i++)
	{
		while(a - values[i] >= 0)
		{
			result += romans[i];
			a -= values[i];
		}
	}

	return result;
}

int main() {
	string a;
	int argh;

	while(cin >> a){
		argh = a.size();
		a.insert(argh,"o");

		if(isdigit(a[0])){
			int num = stoi(a);
			cout << to_roman(num) << endl;
		}
		else{
			cout << to_num(a) << endl;
		}
	}
	return 0;
}
