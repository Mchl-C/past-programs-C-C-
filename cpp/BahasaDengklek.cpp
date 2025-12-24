#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string n;
    cin >> n;
    for(int i = 0;i < n.size();i++){
        int a = n[i];
        string b;
        if(a >= 65 && a <= 90){
            a += 32;
        }
        else if(a >= 97 && a <= 122){
            a -= 32;
        }
        b = a;
        n.replace(i,1,b);
    }
    cout << n << endl;
	return 0;
}
