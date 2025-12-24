// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

vector <int> res;
int arr[150][150];

bool check(int x1,int y1,int x2,int y2){
	// check dari a sampe b ap sudah homogen ato belom
    bool one = false, zero = false;
	bool cek = true;
	for(int i = y1;i < y2;i++){
		for(int k = x1;k < x2;k++){
			cout << arr[i][k];
			if(arr[i][k] == 0){
                zero = true;
			}
			if(arr[i][k] == 1){
                one = true;
			}
			if(zero && one){
				cek = false;
			}
		}
		cout << endl;
	}
	if(cek){
        return true;
	}
	else{
        return false;
    }
}
void split(int x1,int y1,int x2, int y2,string s){
	// cek utk pembagiannya

	cout << "Pos : " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
	// Semua posisi
	int xpos1 = x1,ypos1 = y1;
	int xpos2 = x2 - (x2-x1)/2,ypos2 = y1;
	int xpos3 = x1,ypos3 = y2 - (y2 - y1)/2;
	int xpos4 = x2 - (x2-x1)/2,ypos4 = y2 - (y2 - y1)/2;

	cout << "Part 1" << endl;
	cout << xpos1 << " " << ypos1 << " " << xpos4 << " " << ypos4 << endl;
	bool part1 = check(xpos1,ypos1,xpos4,ypos4);

	cout << "Part 2" << endl;
	cout << xpos2 << " " << ypos2 << " " << x2 << " " << ypos4 << endl;
	bool part2 = check(xpos2,ypos2,x2,ypos4);

	cout << "Part 3" << endl;
	cout << xpos3 << " " << ypos3 << " " << xpos4 << " " << y2 << endl;
	bool part3 = check(xpos3,ypos3, xpos4, y2);

	cout << "Part 4" << endl;
	cout << xpos4 << " " << ypos4 << " " << x2 << " " << y2 << endl;
	bool part4 = check(xpos4,ypos4, x2, y2);

	cout << "Res ~~~" << endl;
	cout << part1 << endl;
	cout << part2 << endl;
	cout << part3 << endl;
	cout << part4 << endl;

	if(part1 == 0){
        s += '0';
        cout << "S : " << s << endl;
		cout << "P : " << 0 << endl;
		split(xpos1,ypos1,xpos4,ypos4,s);
	}
	if(part2 == 0){
        s += '1';
        cout << "S : " << s << endl;
		cout << "P : " << 1 << endl;
		split(xpos2,ypos2,x2,ypos4,s);
	}
	if(part3 == 0){
	    s += '2';
        cout << "S : " << s << endl;
		cout << "P : " << 2 << endl;
		split(xpos3,ypos3, xpos4, y2,s);
	}
	if(part4 == 0){
	    s += '3';
        cout << "S : " << s << endl;
		cout << "P : " << 3 << endl;
		split(xpos4,ypos4, x2, y2,s);
	}
}

int main() {
	int x,y;
	cin >> x >> y;

	for(int i = 0;i < y;i++){
		for(int p = 0;p < x;p++){
			cin >> arr[i][p];
		}
	}
	split(0,0,x,y,"0");
	return 0;
}
