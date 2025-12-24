#include <bits/stdc++.h>
using namespace std;

int row,col;
char lst[30][18];

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int last_fall = -1;
    cin >> row >> col;

    for(int i = 0;i < row;i++){  // ini untuk inputannya, bisa di skip
        for(int x = 0;x < col;x++){
            cin >> lst[i][x];
        }
    }

    for(int z = 0;z < 5;z++){
        for(int i = 0;i < row;i++){ // Cek kalo sebaris 1 semua,
            bool fall = true;       // Ubah jd 0 semua
            for(int x = 0;x < col;x++){
                if(lst[i][x] != '1'){
                    fall = false;
                    break;
                }
            }
            if(fall){
                for(int x = 0;x < col;x++){
                    lst[i][x] = '0';
                }
            }
        }

        for(int i = 0;i < row;i++){
            bool last = true;
            for(int x = 0;x < col;x++){
                if(lst[i][x] == '1'){
                    last = false;
                }
            }
            if(last == true){
                last_fall = i;
            }
        }
        for(int x = 0;x < col;x++){            // cek secara vertikal
            for(int i = last_fall;i >= 0;i--){ // kalo angka 1 trus bawah 0
                if(lst[i][x] == '1'){          // di swap sampe bawahnya 1
                    int f = i;                 // mulai ceknya dr yg pertama
                    while(lst[f+1][x] == '0'){ // runtuh dr bawah
                        swap(lst[f][x],lst[f+1][x]);
                        f++;
                    }
                }
            }
        }
    }

    for(int i = 0;i < row;i++){ //outputnya skip aj
        for(int x = 0;x < col;x++){
            cout << lst[i][x];
        }
        cout << endl;
    }
    return 0;
}
