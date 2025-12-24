// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n == 1 || n == 0){
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int ganjil(int n){
	int encounter = 0;
	int num = 1;
	while(encounter < n){
		if(num & 1){
			encounter ++;
		}
		num ++;
	}
	return(num - 1);
}

void space(int n){
	for(int i = 0;i < n;i++){
		cout << " ";
	}
}

int main() {
	// variables
	int size_multiplier;
	cin >> size_multiplier;

	int sm = size_multiplier;
	int line = 1, v = 5;
	int start = 1,end = 1;
	int width = 19, height = 6;
	int shift = 1;
	int even = ganjil(sm + 1);

	bool first_shift = true;
	width *= size_multiplier;
	height *= size_multiplier;

	// set v size

	v = even + ((2*sm) - 2)*(even - 1) + ganjil(sm) + 2;
	// V
	for(int z = 0;z < v;z++){
		if(first_shift){
			if(line - 2 == even){
				first_shift = false;
				shift ++;
			}
		}
		else{
			if((line - 2 - even) % (even - 1) == 0){
				shift ++;
			}
		}

		space((v+shift)*size_multiplier);
		line == 1 ? cout << "." + string(sm, '-') + "." : cout << "o." + string(sm,'.') + "o";
		line == 1 ? space(((v - (shift*2))*2) + 2): space((v - (shift*2))*2);

		line == 1 ? cout << "." + string(sm, '-') + "." : cout << "o." + string(sm,'.') + "o";
		line ++;
		cout << endl;
	}

	if(sm > 1) cout << string(width,' ');
	space(5);
	cout << ".-." + string(sm - 1,' ') + "o." + string(sm,'.') + "o";

	// if(sm > 1) cout << string(width,' ');
	space(4);
	for(int i = 1;i <= sm;i++){
		cout << "o..o";
	}
	if(sm > 1){
		space(4);
		cout << "o." + string(sm,'.') + "o"  + string(sm - 1,' ');
	}
	cout << endl;

	if(sm > 1) cout << string(width,' ');
	for(int i = 1;i <= sm;i++){
		cout << " .--o...o---o o" + string(sm + 1,'-') + 'o';
	}
	cout << endl;

	for(int i = 0;i < height;i++){
		if(sm > 1) cout << string(v * sm, ' ');
		// one last line
		if(i == height - 1){
			cout << string(start - 2,' ');
			for(int x = start; x < width - end + 2;x++){
				cout << "o";
			}
			break;
		}

		int depth;
		if(i > height/2 - 2){
			start ++;
			end ++;
			depth = fib(end + 1);
		}

		for(int x = 0;x < width;x++){
			bool fs = false;
			if(x == start / 2 - 1){
				fs = true;
				cout << 'o';
			}

			if(x >= width - end - depth && x <= width - end){
				cout << 'o';
			}
			else if(x < width - end){
				cout << '.';
			}

		}
		cout << endl;
	}

}
