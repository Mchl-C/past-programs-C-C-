#include <bits/stdc++.h>
using namespace std;

int main(){
    int alph[27]; memset(alph, 0, sizeof(alph));
    string line = "";
    string line1, line2, line3;

    getline(cin, line1);
    getline(cin, line2);
    getline(cin, line3);
    line += line1; line += line2; line += line3;

    for(char ch : line){
        if(ch > 'a' && ch < 'z') alph[ch - 'a'] ++;
        else if(ch > 'A' && ch < 'Z') alph[ch - 'A'] ++;
    }


    for(int i = 0;i < 26;i++){
        char ch = 'A' + i;
        cout << ch << " : " << alph[i] << endl;
    }
    return 0;
}
