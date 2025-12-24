#include <iostream>
using namespace std;

int N;
int catat[10];
bool pernah[10];

void tulis(int kedalaman) {
    if (kedalaman >= N) {
        // Cetak password
        for (int i = 0; i < N; i++) {
            printf("%d", catat[i]); // Cetak
        }
        printf("\n");
    }else{
        // Masuk ke lapisan lebih dalam
        for (int i = 1; i <= N; i++) {
            if (!pernah[i]) { // i belum pernah?
                pernah[i] = true; // Gunakan
                catat[kedalaman] = i; // Catat di sini
                tulis(kedalaman + 1);
                pernah[i] = false; // Selesai menggunakan
            }
        }
    }
}

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> N;
    tulis(0);
}
