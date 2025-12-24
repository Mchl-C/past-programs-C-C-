#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    int a;

    cin >> a;
    cin >> n;
    for (int i = 1; i < a; i++){
        if (n[i] != n[i-1]){
            cout << n[i-1];
        }
    }
    cout << n[a-1] << endl;
}
