#include <iostream>
using namespace std;

int main(){
    int a,b,c,poin;
    bool absolute_win = false;
    cin >> a >> b >> c;
    poin = 4*(a + b + c)/7;
    if(a >= poin || b >= poin || c >= poin){
        absolute_win = true;
    }
    absolute_win ? cout << "YA\n" : cout << "TIDAK\n";
}
