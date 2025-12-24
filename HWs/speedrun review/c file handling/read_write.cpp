#include <bits/stdc++.h>
using namespace std;

ifstream f1;
ofstream f2;
int main(){
    f1.open("sample.txt");
    f2.open("result2.txt");

    string s;
    while(getline(f1, s)){
        stringstream ss(s);
        int a,b;
        ss >> a >> b;
        f2 << a + b << "\n";
    }
    f1.close(); f2.close();
    return 0;
}
