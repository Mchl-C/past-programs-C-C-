#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    a.erase(a.find(b),b.size());
    a.insert(a.find(c) + c.size(),d);
    cout << a << endl;
	return 0;
}
