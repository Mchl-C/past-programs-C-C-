#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string word = "halo dunia",n;
    int total = 0;
    getline(cin,n);

    for(int i = 0;i < n.size();i ++){
        int decimal = n[i];
        if(decimal >= 65 && decimal <= 90){
            decimal += 32;
        }
        char a = decimal;
        if(a == word[i]){
            total ++;
        }
    }

    cout << total << endl;
}
