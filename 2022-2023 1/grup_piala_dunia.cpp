// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, arr[10], scores[10];
bool correct = false;

void check(int our, int enemy){
	if(our == n){
		bool benar = true;
		for(int i = 0;i < n;i++){
			if(arr[i] != scores[i]){
				benar = false;
				break;
			}
		}
		if(benar){
			correct = true;
			return;
		}
	}
	else if(enemy == n){
		check(our + 1, our + 2);
	}
	else{
		// we win
		scores[our] += 3;
		check(our, enemy + 1);
		scores[our] -= 3;

		// enemy win
		scores[enemy] += 3;
		check(our, enemy + 1);
		scores[enemy] -= 3;

		// draw
		scores[our] ++; scores[enemy] ++;
		check(our, enemy + 1);
		scores[our] --; scores[enemy] --;
	}
}

int main(){
	int t;
	cin >> t;
	for(int p = 0;p < t;p++){
		cin >> n;
		for(int x = 0;x < n;x++){
			cin >> arr[x];
		}
		check(0, 1);
		if(correct){cout << "YES\n";}
		else{cout << "NO\n";}
		correct = false;
	}

}

