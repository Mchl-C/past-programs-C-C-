#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> arr[12];

    for(int i = 0;i < 12;i++){
        arr[i] = {i, i+1};
    }
    random_shuffle(arr, arr + 12);
    for(int i = 0;i < 12;i++){
       cout << arr[i].first << " " << arr[i].second << endl;
    }

}
