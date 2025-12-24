#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,jumlah;
    a = 0;
    while(a==0){
        cin >> jumlah;
        if(jumlah==0){
            break;
        }
        while(jumlah!=0){
            int gerbong[jumlah+100];
            stack <int> s;
            c = 1;
            for(int i=1;i<=jumlah;i++){
                cin >> gerbong[i];
                if(gerbong[1]==0){
                    break;
                }
            }
            for(int j=1;j<=jumlah;j++){
                s.push(j);
                while(!s.empty() && s.top()==gerbong[c]){ // tambahin s.empty() case solved
                    s.pop();
                    c+=1;
                }
            }
            if(gerbong[1]==0){
                cout << endl;
                break;
            }
            if(s.empty()==true){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
