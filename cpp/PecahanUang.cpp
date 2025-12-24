#include <iostream>
using namespace std;

int amount[10] = {};
int price[10] = {1000,500,200,100,50,20,10,5,2,1};
int main() {
	int dolar,i = 0;
	cin >> dolar;
	while(dolar > 0){
		if(dolar >= price[i]){
			dolar -= price[i];
			amount[i] += 1;
		}
		else{
			i ++;
		}
	}
	for(int x = 0;x < 10;x++){
		if(amount[x] >= 1){
			cout << price[x] << " " << amount[x] << endl;
		}
	}
	return 0;
}
