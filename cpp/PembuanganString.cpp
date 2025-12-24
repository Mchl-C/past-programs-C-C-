#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string n,t;
    cin >> n >> t;
    while(n.find(t) != string::npos){
        n.erase(n.find(t),t.size());
    }
    cout << n << endl;
	return 0;
}
