#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,t,num1,num2;
    int x,y,l;
    char p,q;

    cin >> n;
    int List[2][n];

    for(int i = 0;i < n;i++){cin >> List[0][i];}
    for(int i = 0;i < n;i++){cin >> List[1][i];}
    cin >> t;
    for(int i = 0;i < t;i++){
        cin >> p >> x >> q >> y;
        p == 'A' ? num1 = 0 : num1 = 1;
        q == 'A' ? num2 = 0 : num2 = 1;

        l = List[num1][x-1];
        List[num1][x-1] = List[num2][y-1];
        List[num2][y-1] = l;
    }
    for(int i = 0;i < 2;i++){
        for(int u = 0;u < n;u++){
            cout << List[i][u] << " ";
        }
        cout << endl;
    }
    return 0;
}
