#include <iostream>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int test_case,amount;
	cin >> test_case;
	for(int i = 0;i < test_case;i++){
		int l = 0,h = 0;
		cin >> amount;
		for(int x = 0;x < amount;x++){
			int max_num,min_num;
			cin >> max_num;
			min_num = max_num;
			for(int y = 0;y < 2;y++){
				int d;
				cin >> d;
				max_num = max(d,max_num);
				min_num = min(d,min_num);
			}
			l += min_num;
			h += max_num;
		}
		cout << l << " " << h << endl;
	}
	return 0;
}
