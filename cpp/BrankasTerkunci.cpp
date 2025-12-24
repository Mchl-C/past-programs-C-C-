#include <iostream>
using namespace std;

int N,K;
int catat[10];
bool pernah[10];

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        for(int i = 0;i < K;i++){
            cout << catat[i + (N-K)] << " ";
        }
        cout << endl;
    }
    else{
        for (int i = catat[kedalaman-1]+1; i <= N; i++) {
                catat[kedalaman] = i;
                tulis(kedalaman + 1);
            }
        }
}

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> N >> K;
    tulis(N-K);
}
