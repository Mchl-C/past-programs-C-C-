#include <iostream>
using namespace std;
#define pb push_back

int main(){
    srand(time(NULL));
    vector<int> v;
    for(int i = 0;i < 100;i++){
        v.pb(rand() % 100);
    }
    for(int i : v){
        cout << v[i] << " ";
    }
    return 0;
}
