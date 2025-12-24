#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,p;
    string n,res;
    cin >> n >> k;

    for(int i = 0;i < n.size();i++){
        char c;int a;
        p = n[i];
        a = p + k;
        if(a > 122){
            a -= 26;
        }
        c = a;
        res += c;
    }
    cout << res << endl;
	return 0;
}
