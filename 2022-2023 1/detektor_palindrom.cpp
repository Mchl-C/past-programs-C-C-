// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;

    for(int i = 0;i < n;i++){
        string s;
        cin >> s;

        string s1 = s;
        reverse(s1.begin(), s1.end());

        if(s1 == s){
            cout << "palindrom\n";
        }
        else{
            cout << "bukan palindrom\n";
        }
    }

	return 0;
}
