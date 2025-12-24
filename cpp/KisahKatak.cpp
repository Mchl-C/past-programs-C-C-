// Source: https://usaco.guide/general/io

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,d,total = 0;
	cin >> n >> d;
	int input[n+1];
	for(int i = 0;i < n;i++){
		cin >> input[i];
	}
	sort(input,input + n);
	d -= input[n-1];
	total += input[n-1];
	for(int i = 0;i < n;i++){
		if(input[i] >= d){
			total += input[i];
			break;
		}
	}
	cout << total << endl;
}
