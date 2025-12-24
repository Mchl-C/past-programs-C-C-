#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n;
    cin >> n;

    for(int i = 1;i <= n;i++){
        if(i == 42){
            cout << "ERROR\n";
            break;
        }
        if(i % 10 == 0){
            continue;
        }
        else{
            cout << i << endl;
        }
    }
    return 0;
}
