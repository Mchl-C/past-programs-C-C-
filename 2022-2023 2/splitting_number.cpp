#include <bits/stdc++.h>
using namespace std;

string itob(int num,string s){
    if(num == 0){
        return s;
    }
    s = to_string(num % 2) + s;
    return itob(num/2,s);
}

int btoi(string bin, int r,int k){
    if(bin.size() <= 0){
        return r;
    }
    if(bin.back() == '1'){r += pow(2,k);}
    bin.pop_back();
    k ++;
    return btoi(bin,r,k);
}

int main() {
    int num;

    while(cin >> num){
        string a = "",b = "";
        if(num == 0){
            break;
        }

        // cout << itob(num,"")  << endl;

        string s = itob(num,"");
        int size = s.size(), one = 0;
        for(int i = size - 1;i >= 0;i--){
            if(s[i] == '1'){
                if(one % 2 == 0){
                    a = "1" + a;
                    b = "0" + b;
                }
                else{
                    b = "1" + b;
                    a = "0" + a;
                }
                one ++;
            }
            else{
                a = "0" + a;
                b = "0" + b;
            }
        }

        // cout << a << " " << b << endl;
        cout << btoi(a,0,0) << " " << btoi(b,0,0) << endl;
    }

    return 0;
}
