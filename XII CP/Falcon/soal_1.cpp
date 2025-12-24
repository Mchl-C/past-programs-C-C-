#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

void lead_zero(int n){
    if(n < 10) cout << '0' << n;
    else cout << n;
}
int main(){
     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
     int n[10];
     int date[15] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     int month = 0;
     int d = 0;
     int date_amount = 0;
     int idx = 0, idx2 = 0;
     bool one = false;

     cin >> n[0] >> n[1] >> n[2];
     if(n[0] <= 12){month ++; idx = 0;}
     if(n[1] <= 12){month ++; idx = 1;}
     if(n[2] <= 12){month ++; idx = 2;}

     if(month == 1){
        if(idx == 0 && n[1] == n[2] || idx == 1 && n[0] == n[2] || idx == 2 && n[0] == n[1]) one = true;
     }

     for(int i = 0;i <= 2;i++){
        if(i != idx){
            if(n[i] <= date[n[idx] - 1]){
                d = i;
                date_amount ++;
            }
        }
     }

     for(int i = 0;i <= 2;i++){
        if(i != idx && i != d) idx2 = i;
     }

     if(n[0] == n[1] && n[0] == n[2]) one = true;
     if(date_amount == 0) one = false;
     if(date_amount == 1 && month == 1 && n[d] != n[idx2]) one = true;
     if((n[idx] == n[d] || n[idx] == n[idx2]) && date_amount == 1) one = true;
     if(n[d] == 29 && n[idx] == 2) one = false;

     if(one){
        lead_zero(n[d]);
        cout << "/";
        lead_zero(n[idx]);
        cout << "/";
        lead_zero(n[idx2]);
        cout << endl;
     }

     else cout << "SELAMAT\n";

     return 0;
}
