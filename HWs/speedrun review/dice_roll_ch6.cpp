#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(NULL));
    int dice_cnt[13] = {0};
    int lim = 36000;

    for(int i = 0;i < lim;i++){
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        dice_cnt[dice1 + dice2] ++;
    }

    int p = 1, cnt = 1;
    cout << setw(7) << left << "Sum" << setw(10) << left << "Total" << setw(10) << left << "Expected" << "Actual" << endl;
    for(int i = 2;i < 12;i++){
        double chance = cnt/0.36;
        double exp_chance = dice_cnt[i] * 1.0 / lim * 100.0;
        cout << setw(7) << left << i << setw(10) << left << setprecision(3) << fixed << dice_cnt[i] << setw(10) << left << chance << exp_chance << endl;
        cnt += p;
        if(cnt == 6) p = -1;
    }
}
