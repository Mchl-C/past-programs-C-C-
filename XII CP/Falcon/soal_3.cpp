#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main(){
     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
     int x,y,z; cin >> x >> y >> z;
     int total = x * 5000 + y * 10000 + z * 19000;
     int opsi[5] = {11520, 7920, 14400, 18000};
     int usage[5] = {0,0,0,0};
     int xmax = x * 5000;
     int ymax = y * 10000;
     int zmax = z * 19000;

     int sisa = 0;

     int idx = 0;
     int smallest = xmax;
     for(int i = 0;i < 4;i++){
        if(xmax % opsi[i] < smallest){
            smallest = xmax % opsi[i];
            idx = i;
        }
     }






     return 0;
}
