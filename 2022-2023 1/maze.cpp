// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define pb push_back
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool arr[110][110];
bool used[110][110];
int n, m, a, b;
int min_steps = 1e9;

void total_step(int y, int x, int steps){
	used[y][x] = true;
	cout << y + 1 << " " << x + 1 << " " << steps << endl;
	if(y == n - 1 || x == m - 1 || y == 0 || x == 0){
		cout << "Steps : " << steps << endl;
		min_steps = min(min_steps, steps);
		return ;
	}
	if(arr[y][x + 1] == 1 && !used[y][x + 1]){
		total_step(y, x + 1, steps + 1);
	}
	if(arr[y + 1][x] == 1 && !used[y + 1][x]){
		total_step(y + 1, x, steps + 1);
	}
	if(arr[y - 1][x] == 1 && !used[y - 1][x]){
		total_step(y - 1, x, steps + 1);
	}
	if(arr[y][x - 1] == 1 && !used[y][x - 1]){
		total_step(y, x - 1, steps + 1);
	}
}

int main() {
	fastio
	cin >> n >> m;
	for(int i = 0;i < n;i++){
		for(int x = 0;x < m;x++){
			int num;
			cin >> num;
			num == -1 ? arr[i][x] = 0 : arr[i][x] = 1;
			used[i][x] = 0;
		}
	}

	cin >> a >> b;
	total_step(a - 1, b - 1,1);
	cout << min_steps << endl;
}

