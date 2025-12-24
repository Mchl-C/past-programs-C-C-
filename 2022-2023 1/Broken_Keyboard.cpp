#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int alp[26];
        string s;

        memset(alp,0,sizeof(alp));
        cin >> s;

        int t = 0;
        for(int x = 1;x < s.size()+1;x++){
            char ch = s[x], c = s[x-1];
            int ascii = ch, asc = c;
            if(ch == c){
                t ++;
            }
            else{
                t ++;
                if(t % 2 == 1){
                    alp[asc - 97] = 1;
                }
                t = 0;
            }
        }

        for(int x = 0; x < 26;x++){
            // cout << x + 1 << " : " << alp[x] << endl;
            if(alp[x] == 1){
                int res = x + 97;
                char chr = res;
                cout << chr;
            }
        }
        cout << endl;
    }
    return 0;
}
