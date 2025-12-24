#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main(){
     ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
     int n, k, d;
     cin >> n >> k >> d;
     int arr[n + 10];
     int tot = 0;

     for(int i = 0;i < n;i++){
        cin >> arr[i];
     }

     for(int i = 0;i < n;i++){
        for(int x = i;x < n;x++){
            if(x - i >= d && abs(arr[x] - arr[i]) == k){
                tot ++;
            }
        }
     }

     cout << tot << endl;
     return 0;
}
