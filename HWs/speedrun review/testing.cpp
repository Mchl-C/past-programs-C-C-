#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(NULL));
    pair<string, int> arr[10];
    arr[0] = {"hello", 120};
    arr[1] = {"world", 210};
    arr[2] = {"uwu", 100};
    arr[3] = {"umu", 200};
    arr[4] = {"Yeyy", 300};
     random_shuffle(arr, arr + 5);
     for(auto it:arr){
        cout << it.first << " " << it.second << endl;
     }
}
