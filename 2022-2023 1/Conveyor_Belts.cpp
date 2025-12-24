// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int find_layer(int x, int y, int half){
	int layer, layer_x, layer_y;
	// cout << "x, y : " << x << " " << y << " , half : " << half << endl;
	if(x <= half){
		layer_x = half + 1 - x;
	}
	else{
		layer_x = x - half;
	}

	if(y <= half){
		layer_y = half + 1 - y;
	}
	else{
		layer_y = y - half;
	}

	layer = max(layer_y, layer_x);
	return layer;
}

int main() {
	long long t;
	cin >> t;
	for(int x = 0;x < t;x++){
		long long n,x1,y1,x2,y2;

		cin >> n >> x1 >> y1 >> x2 >> y2;
		int layer_1 = find_layer(x1, y1, n/2);
		int layer_2 = find_layer(x2, y2, n/2);
		cout << abs(layer_1 - layer_2) << endl;
	}
	return 0;
}
