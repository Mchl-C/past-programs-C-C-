// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int arr[128][128] = {};
int x = 0,y = 0;

void check(int x,int y,int w,int h){
	// split the input into 4 parts
	int x1 = x, x2 = x + (w/2);
	int y1 = y, y2 = y + (h/2);

	bool homogen = true;
	for(int i = y1;i < y2;i++){
		for(int p = x1;p < x2;p++){
			cout << arr[i][p] << ' ';
			if(arr[i][p] == 1){
				homogen = false;
				check(x1,x2,(x2-x1),(y2-y1));
			}
		}
		cout << endl;
	}
	if(homogen){
		check((w/2),y,w,h);
		check((w/2),(h/2),w,h);
		check(w,(h/2),w,h);
	}
}

int main() {
	int w,h;
	cin >> w >> h;
	for(int i = 0;i < h;i++){
		for(int p = 0;p < w;p++){
			cin >> arr[i][p];
		}
	}
	check(x,y,w,h);
}
