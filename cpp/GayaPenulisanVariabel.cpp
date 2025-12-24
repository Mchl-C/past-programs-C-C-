#include <iostream>
#include <string>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string n,b,c;
    bool triggered = false;
    int a;
    cin >> n;

    for(int i = 0;i < n.size();i++){
        if(n[i] == '_'){
            triggered = true;
            a = n[i+1];
            a -= 32;
            c = a;
            b = c;
            n.replace(i,2,b);
        }
    }

    if(!triggered){
        for(int i = 0;i < n.size();i++){
            a = n[i];
            if(a >= 65 && a <= 90){
                a += 32;
                c = a;
                b = "_" + c;
                n.replace(i,1,b);
            }
        }
    }
    cout << n << endl;
	return 0;
}
