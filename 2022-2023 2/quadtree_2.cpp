// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

string position[128 * 128];
int matrix[128][128];
int npos = 0;

// Function ini untuk mengecek homogen tidaknya
bool homogen(int x1, int y1, int x2, int y2){
	int num = matrix[y1][x1];
	// cout << "First num : " << num << endl;
	for(int y = y1; y <= y2; y++){
		for(int x = x1;x <= x2;x ++){
			// cout << matrix[y][x] << " ";
			if(matrix[y][x] != num){
				// cout << "beda di " << matrix[y][x];
				return false;
			}
		}
	}
	return true;
}

void quadtree(int r, int c, int k, string s, int &npos){
   	if (homogen(c,r,c + k - 1,r + k - 1)){
		// cout << "homogen\n";
		if (matrix[r][c] == 1){
			// cout << "1" + s << endl;
        	position[npos] = "1" + s;
        	npos++;
     	}
   } else {
      // Belah
      quadtree(r, c, k/2, s+"0", npos);
      quadtree(r, c + k/2, k/2, s+"1", npos);
      quadtree(r + k/2, c, k/2, s+"2", npos);
      quadtree(r + k/2, c + k/2, k/2, s+"3", npos);
   }
}

int main() {
	int r,c;
	cin >> r >> c;

	int maxRc = max(r, c);
   	int pow2 = 1;
   	while (pow2 < maxRc){
    	pow2 *= 2;
   	}

	for(int y = 0; y < r; y++){
		for(int x = 0; x < c; x++){
			cin >> matrix[y][x];
		}
	}

	int npos = 0;
    quadtree(0, 0, pow2, "", npos);
    cout << npos << endl;
    for (int i = 0; i < npos; i++) {
        cout << position[i] << endl;
    }
	// homogen(4,2,7,3);
}
