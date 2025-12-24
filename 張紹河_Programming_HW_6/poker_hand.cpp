#include <bits/stdc++.h>
using namespace std;

void show_card(int arr[5][2]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

bool check(int arr[5][2], int card_num){
    for(int i = 0; i < 5;i++){
        if(arr[i][1] == card_num) return true;
    }
    return false;
}

bool same_logo(int arr[5][2]){
    int logo = arr[0][0];
    for(int i = 1; i < 5;i++){
            if(logo != arr[i][0]) return false;
    }
    return true;
}

int find_max(int nums[15]){
    int max_amt = 0;
    for(int i = 2;i <= 14; i++) max_amt = max(max_amt, nums[i]);
    return max_amt;
}

int find_max_index(int nums[15]){
    int max_amt = 0, max_idx=  0;
    for(int i = 2;i <= 14; i++) {
            if(nums[i] >= max_amt){
                max_amt = nums[i];
                max_idx = i;
            }
    }
    return max_idx;
}

int second_max(int nums[15], int max_idx){
    int sc = 0;
    for(int i = 2; i <= 14;i ++){
        if(i != max_idx){
            sc = max(sc, nums[i]);
        }
    }
    return sc;
}

int find_comb(int arr[5][2]){
    // First Check
    // Royal Flush
    bool number_match = true;
    bool logo_match = same_logo(arr);
    for(int i = 10; i <= 14; i++){
        if(!check(arr, i)) {number_match = false; break;}
    }
    if(number_match && logo_match) return 0;

    // Second Check
    // Straight Flush
    for(int i = 2; i <= 9; i++){
        bool number_match = true;
        for(int j = i; j <= i + 4; j++){
            if(!check(arr, j)) {number_match = false; break;}
        }
        if(number_match && logo_match) return 1;
    }

    // Third Check
    // Four of a kind
    int counts[15] = {0};
    for(int i = 0; i < 5;i++) counts[arr[i][1]] ++;

    int max_similar = find_max(counts);
    int max_idx = find_max_index(counts);

    if(max_similar == 4) return 2;

    // Fourth Check
    // Full House
    int max_similar_2 = second_max(counts, max_idx);
    if(max_similar == 3 && max_similar_2 == 2) return 3;

    // Fifth Check
    // Flush
    if(logo_match) return 4;

    // Sixth Check
    // Straight
    for(int i = 2; i <= 10; i++){
        number_match = true;
        for(int j = i;j <= i + 4; j++){
            if(!check(arr, j)) {number_match = false; break;}
        }
        if(number_match) return 5;
    }

    // Seventh Check
    // Three of a kind
    if(max_similar == 3) return 6;

    // Eighth
    // Two Pair
    if(max_similar == 2 && max_similar_2 == 2) return 7;

    // Ninth
    // Pair
    if(max_similar == 2) return 8;

    // Tenth
    // High Cards
    return 9;
}

int main(){
    srand(time(0));
    int tot_draw = 2598960;
    int comb[11] = {0};
    string names[11] = {"Royal Flush", "Straight Flush", "Four of a kind", "Full House", "Flush" , "Straight" , "Three of a kind" , "Two pairs" , "One pair", "Nothing"};
    // Royal Flush, Straight Flush, Four of a kind, full house, flush, straight, three of a kind, two pairs, one pair, nothing

    pair<int,int> deck[52];
    int idx = 0;
    for(int logo=0; logo<4; logo++){
        for(int value=2; value<=14; value++){
            deck[idx++] = {logo, value};
        }
    }
    // logo : clover, diamond, heart, spade
    // value : 2 - 10, 11 = Ace, 12 = Jack, 13 = Queen, 14 = King

    for(int x = 0; x < tot_draw; x++){
        random_shuffle(deck, deck+52);
        int arr[5][2];  // 5 cards

        for(int i=0; i<5; i++){
            arr[i][0] = deck[i].first;   // logo
            arr[i][1] = deck[i].second;  // value
        }


        // show_card(arr);
        int res = find_comb(arr);
        comb[res] ++;
        // cout << "Combination : " << names[res] << endl;
    }

    cout << "Total Number of hands dealt : " << tot_draw << endl;
    for(int y = 0; y <= 9;y++){
        cout << "The Occurance of " << names[y] << " : " << comb[y] << endl;
    }

    return 0;
}
