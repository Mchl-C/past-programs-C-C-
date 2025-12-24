#include <bits/stdc++.h>
using namespace std;

int find_max(int n, int m, int *arr){
    int mx = 0;
    for(int i = 0; i < n*m - 1;i++){
        mx = max(mx, *(arr + i));
    }
    return mx;
}

int find_min(int n, int m, int *arr){
    int mn = 1000;
    for(int i = 0;i < n*m - 1;i++){
        mn = min(mn, *(arr + i));
    }
}

void print_arr(int n, int m, int *arr){
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cout << *(arr + ((i * m) + j)) << " ";
        }
        cout << endl;
    }
}

void avg(int n, int m, int *arr){
    for(int i = 0; i < n;i++){
        int tot = 0;
        for(int j = 0; j < m;j++) tot += *(arr + j);
        double average = tot * 1.0 / m;
        cout << setw(10) << left << i + 1 << average << endl;
    }
}

int main(){
    int n = 3, m = 4;
    int arr[n][m] = {{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    while(true){
        cout << "Enter a choice: ";
        int choice;
        cin >> choice;
        if(choice == 1) print_arr(n, m, (int*)arr);
        else if(choice == 2) cout << find_min(n, m, (int*)arr) << endl;
        else if(choice == 3) cout << find_max(n, m, (int*)arr) << endl;
        else if(choice == 4) avg(n, m, (int*)arr);
        else break;
    }
    return 0;
}
