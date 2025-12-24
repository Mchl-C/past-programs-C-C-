#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin >> n;
    n.find("0") == -1 ? cout << "NO\n" : cout << "YES\n";
}
