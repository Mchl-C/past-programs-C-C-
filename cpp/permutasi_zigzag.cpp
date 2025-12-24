#include <iostream>
using namespace std;

int N;
int catat[10];
bool pernah[10];

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        bool zigzag = true;
        bool con1 = false;
        bool con2 = false;
        for (int i = 1; i < N - 1; i++) {
            con1 = catat[i] > catat[i-1] && catat[i] > catat[i+1];
            con2 = catat[i] < catat[i-1] && catat[i] < catat[i+1];
            if(!(con1||con2)){
                zigzag = false;
            }
        }
        if(zigzag){
            for(int i = 0;i < N;i++){
                cout << catat[i];
            }
            cout << endl;
        }
    }else{
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) {
                pernah[i] = true;
                catat[kedalaman] = i;
                tulis(kedalaman + 1);
                pernah[i] = false;
            }
        }
    }
}

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> N;
    tulis(0);
}
