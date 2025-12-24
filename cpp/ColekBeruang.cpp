#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,d,total = 0;
    cin >> n >> d;
    int list[n];
    for(int i = 0;i < n;i++){
        int p;
        cin >> list[i];
        p = list[i] - d;
        for(int x = 0;x < i;x++){
            if(list[x] == p){
                total ++;
            }
        }
    }
    cout << total << endl;
}
