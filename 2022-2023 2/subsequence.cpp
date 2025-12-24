#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,s;
    while(cin >> n >> s){
        int low = 0, high = 0, sum;
        vector <int> arr(n);

        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }

        int min_size = n;
        bool lesser = false;
        sum = arr[0];

        while(high < n){
            // if sum besar dr s, low naek
            if(sum >= s){
                // cout << "Increase low" << endl;
                // cout << "Sum : " << sum << ", range : " << low << " " << high << endl;
                int temp = high - low + 1;
                lesser = true;
                min_size = min(min_size, temp);
                if(sum >= s && low < high){
                    sum -= arr[low];
                    low ++;
                }
                else if(low >= high){
                    high ++;
                    sum += arr[high];
                }
            }
            // if sum kecil dr sum, tambah high
            if(sum < s){
                // cout << "Increase high" << endl;
                // cout << "Sum : " << sum << ", range : " << low << " " << high << endl;
                high ++;
                if(high < n){
                    sum += arr[high];
                }
            }
            // cout << endl;
        }
        if(!lesser){
            cout << -1 << endl;
            continue;
        }
        cout << min_size << endl;
    }
    return 0;
}
