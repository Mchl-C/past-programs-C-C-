#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int test_case,loop_num;
	cin >> test_case;

	for(int i = 0;i < test_case;i++){
		cin >> loop_num;
		int  list[loop_num + 1],total = 0;
		for(int x = 0;x < loop_num;x++){
			cin >> list[x];
		}
		sort(list,list + loop_num);
		for(int x = 0;x < 5;x++){
			total += list[loop_num - x - 1];
		}
		cout << total << endl;
	}
	return 0;
}
