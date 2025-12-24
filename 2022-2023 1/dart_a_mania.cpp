// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int num;
	while(cin >> num){
		if(num <= 0){
			cout << "END OF OUTPUT\n";
			break;
		}

		int arr[50] = {0, 1, 2, 3,4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
		21,22, 24, 26, 27, 28, 30, 32, 33, 34, 36, 38, 39, 40, 42, 45, 48,
		50, 51, 54, 57, 60};

		int perm = 0;
		int comb = 0;
		int total = 43;

		for (int i = 0; i < total; i++)
			for (int j = i; j < total; j++)
				for (int k = j; k < total; k++)
					if (arr[i] + arr[j] + arr[k] == num)
						comb ++;

		for(int i = 0;i < total;i++){
			for(int j = 0;j < total;j++){
				for(int k = 0;k < total;k++){
					if(arr[i] + arr[j] + arr[k] == num){
						perm ++;
					}
				}
			}
		}

		if(perm > 0){
			cout << "NUMBER OF COMBINATIONS THAT SCORES " << num << " IS " << comb << "." << endl;
			cout << "NUMBER OF PERMUTATIONS THAT SCORES " << num << " IS " << perm << "." << endl;
		}
		else{
			cout << "THE SCORE OF " << num << " CANNOT BE MADE WITH THREE DARTS." << endl;
		}

		for(int p = 0;p < 70;p++){
			cout << "*";
		}
		cout << endl;
	}
}
