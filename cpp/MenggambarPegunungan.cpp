#include <iostream>
using namespace std;

void draw(int num){
	if(num > 0){
		draw(num-1);
		for(int i = 0;i < num;i++){
			cout << '*';
		}
		cout << endl;
		draw(num-1);
	}
}

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int input;
	cin >> input;
	draw(input);
	return 0;
}
