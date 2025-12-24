// Source: https://usaco.guide/general/io

// Inputannya Nama Size Simbol
// '.' untuk space
#include <iostream>
#include <string>
using namespace std;

int n,x1 = 0,p = 0;
char symbol;
int M(){
    // M
    cout << " ";
    cout << symbol;
    for(int x = 0;x < n;x++){
        if(x1 < n/2 + 1 && (x == x1 - 1 || x == n - x1)){
            cout << symbol;

        }
        else if(x1 == n/2 + 1 && x == x1 - 1){
            cout << symbol;

        }
        else{
            cout << " ";

        }
    }
    x1++;
    cout << symbol;
}

int C(){
    // C
    cout << " ";
    cout << symbol;
    if(p == 0 || p == n-1){
        for(int x = 0;x < n;x++){
            cout << symbol;

        }
    }
    else if(p > 0 && p < n-1){
        for(int x = 0;x < n;x++){
            cout << " ";

        }
    }
}

int I(){
    //I
    cout << " ";
    cout << symbol;

}

int A(){
    cout << " ";

    for(int x = 0;x <= n - (p+1);x++){
        cout << " ";

    }
    if(p == 0){
        cout << "";
    }
    else if(p == n/2){
        for(int x = 0;x < n-1;x++){
            cout << symbol;

        }
    }
    else{
        cout << symbol;

        for(int x = 0;x <= n + p - (n-p+2);x++){
            cout << " ";

        }
    }
    cout << symbol;
    if(n % 2 == 0){
        if(p == n/2){
            cout << symbol;
        }
    }
    for(int x = 0;x <= n - (p+1);x++){
        cout << " ";

    }
}

int B(){
    cout << " ";
    cout << symbol;

    if(p == 0 || p == n-1 || p == n/2){
        for(int x = 0;x < n-2;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n-2;x++){
            cout << " ";

        }
        cout << symbol;

    }
    if(p == 0 || p == n/2 || p == n-1){
        cout << " ";

    }
}

int D(){
    cout << " ";
    cout << symbol;

    if(p == 0 || p == n-1){
        for(int x = 0;x < n - 3;x++){
            cout << symbol;

        }
    }
    else{
        if(p == 1 || p == n-2){
            for(int x = 0;x < n - 3;x++){
                cout << " ";

            }
        }
        else{
            for(int x = 0;x < n - 2;x++){
                cout << " ";

            }
        }
        cout << symbol;

    }
    if(p == 0 || p == n-1){
        cout << "  ";

    }
    else if(p == 1 || p == n-2){
        cout << " ";

    }
}

int E(){
    cout << " ";
    cout << symbol;

    if(p == 0 || p == n-1 || p == n/2){
        for(int x = 0;x < n - 1;x++){
            cout << symbol;

        }
    }
    else if((p > 0 && p < n/2) || (p > n/2 && p < n-1)){
        for(int x = 0;x < n - 1;x++){
            cout << " ";

        }
    }
}

int F(){
    cout << " ";
    cout << symbol;

    if(p == 0){
        for(int x = 0;x < n - 2;x++){
            cout << symbol;

        }
    }
    else if(p == n/2 - 1){
        for(int x = 0;x < n - 3;x++){
            cout << symbol;

        }
    }
    if(p == n/2 - 1){
        cout << " ";
    }
    if(p > 0 && p < n/2 - 1){
        for(int x = 0;x < n - 2;x++){
            cout << " ";
        }
    }
    else if(p > n/2 - 1 && p < n){
        for(int x = 0;x < n - 2;x++){
            cout << " ";
        }
    }
}

int G(){
    cout << " ";
    cout << symbol;

    if(p == 0 || p == n-1){
        for(int x = 0;x < n + 1;x++){
            cout << symbol;

        }
    }
    else if(p == n/2){
        for(int x = 0;x < n/2 + 1;x++){
            cout << " ";

        }
        for(int x = 0;x < n/2;x++){
            cout << symbol;

        }
    }
    else if(p > n/2 - 1){
        for(int x = 0;x < n;x++){
            cout << " ";

        }
        cout << symbol;

    }
    if(p > 0 && p <= n/2 - 1){
        for(int x = 0;x < n + 1;x++){
            cout << " ";
        }
    }
}

int H(){
    cout << " ";
    cout << symbol;

    if(p == n/2){
        for(int x = 0;x < n-2;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n-2;x++){
            cout << " ";

        }
    }
    cout << symbol;

}

int J(){
    cout << " ";
    if(p == 0){
        for(int x = 0;x < n;x++){
            cout << symbol;

        }
    }
    else if(p == n-1){
        for(int x = 0;x < n/2 + 1;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n/2;x++){
            cout << " ";

        }
        cout << symbol;

    }
    if(p > 0){
        for(int x = 0;x < n/2;x++){
            cout << " ";
        }
    }
    else if(p == 0){
        cout << " ";
    }
}

int K(){
    cout << " ";
    cout << symbol;

    if(p < n/2){
        for(int x = 0;x < n - p - 3;x++){
            cout << " ";

        }
        cout << symbol;

    }
    else{
        for(int x = 0;x < p - 2;x++){
            cout << " ";

        }
        cout << symbol;

    }
    if(p < n/2){
        for(int x = 0;x < p;x++){
            cout << " ";

        }
    }
    else{
        for(int x = 0;x < n - p - 1;x++){
            cout << " ";

        }
    }
}

int L(){
    cout << " ";
    cout << symbol;

    if(p == n-1){
        for(int x = 0;x < n-2;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n-2;x++){
            cout << " ";

        }
    }
}

int N(){
    cout << " ";
    cout << symbol;

    for(int x = 0;x < p;x++){
        cout << " ";

    }
    cout << symbol;

    for(int x = 0;x < n - p - 1;x++){
        cout << " ";

    }
    cout << symbol;

}

int O(){
    cout << " ";
    cout << symbol;

    if(p == 0 || p == n-1){
        for(int x = 0;x < n - 3;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n - 3;x++){
            cout << " ";

        }
    }
    cout << symbol;

}
int P(){
    cout << " ";
    cout << symbol;

    if(p == 0 || p == n/2){
        for(int x = 0;x < n - 3;x++){cout << symbol;}
    }
    else if(p > 0 && p < n/2){
        for(int x = 0;x < n - 3;x++){cout << " ";}
        cout << symbol;

    }
    if(p > n/2){
        for(int x = 0;x < n - 2;x++){cout << " ";}
    }
    if(p == 0 || p == n/2){
        cout << " ";

    }
}

int Q(){
    cout << " ";

    if(p == 0 || p == n-2){
        cout << symbol;
        for(int x = 0;x < n - 3;x++){
            cout << symbol;

        }
    }
    else if(p >= 0 && p <= n-2){
        cout << symbol;
        for(int x = 0;x < n - 3;x++){
            cout << " ";

        }
    }
    else{
        for(int x = 0;x < n/2;x++){
            cout << " ";

        }
        for(int x = 0;x < n/2;x++){
            cout << symbol;

        }
    }
    cout << symbol;
    if(p < n - 1){
        for(int x = 0;x < n/2 - (n/4);x++){
            cout << " ";
        }
    }

}

int R(){
    cout << " ";
    cout << symbol;

    if(p == 0 || p == n/2){
        for(int x = 0;x < n - 2;x++){cout << symbol;}
    }
    else{
        for(int x = 0;x < n - 2;x++){cout << " ";}
        cout << symbol;

    }
    if(p == n/2 || p == 0){
        cout << " ";

    }
}

int S(){
    cout << " ";

    if(p == 0 || p == n/2 || p == n-1){
        for(int x = 0;x < n-1;x++){
            cout << symbol;

        }
    }
    else if(p > 0 && p < n/2){
        cout << symbol;

        for(int x = 0;x < n-2;x++){
            cout << " ";

        }
    }
    else if(p > n/2 && p < n-1){
        for(int x = 0;x < n-2;x++){
            cout << " ";

        }
        cout << symbol;

    }
}

int T(){
    int add = 0;
    n >= 6 ? add = 1 : add = 0;
    cout << " ";

    if(p == 0){
        for(int x = 0;x < n;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n/2;x++){
            cout << " ";

        }
        cout << symbol;

    }
    if(p > 0){
        for(int x = 0;x < n/2 - add;x++){
            cout << " ";

        }
    }
}

int U(){
    cout << " ";
    cout << symbol;

    if(p == n-1){
        for(int x = 0;x < n - 2;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n - 2;x++){
            cout << " ";

        }
    }
    cout << symbol;

}

int V(){
    cout << " ";

    for(int x = 0;x < p;x++){
        cout << " ";

    }
    cout << symbol;

    for(int x = 0;x < (n - p) * 2 - 2;x++){
        cout << " ";

    }
    cout << symbol;
    if(p > 0){
        for(int x = 0;x < p;x++){
            cout << " ";
        }
    }
}

int W(){
	cout << " ";
    int lol = 0;
    n % 2 == 1 ? lol = 1 : lol = 0;
    cout << symbol;

    if(p > n/2){
        for(int x = 0;x < n-p-1;x++){
            cout << " ";
        }
        cout << symbol;
        for(int x = 0;x < (p*2)-n-1 + lol;x++){
            cout << " ";
        }
        cout << symbol;
        for(int x = 0;x < n-p-1;x++){
            cout << " ";
        }
    }
    else if(p == n/2){
        for(int x = 0;x < n/2 - 1 + lol;x++){
            cout << " ";
        }
        cout << symbol;
        for(int x = 0;x < n/2 - 1 + lol;x++){
            cout << " ";
        }
    }
    else if(p < n/2){
        for(int x = 0;x < n-1 + lol;x++){
            cout << " ";
        }
    }
    cout << symbol;
}
int X(){
    cout << " ";

    if(p < n/2 + 1){
        for(int x = 0;x < p;x++){
            cout << " ";

        }
    }
    else{
        for(int x = 0;x < n - p - 1;x++){
            cout << " ";

        }
    }
    cout << symbol;

    if(p < n/2 + 1){
        for(int x = 0;x < n - ((p+1)*2);x++){
            cout << " ";

        }
    }
    else{
        for(int x = 0;x < p - (n-p);x++){
            cout << " ";

        }
    }
    cout << symbol;


    if(p > 0 && p < n/2){
        for(int x = 0;x < p;x++){
            cout << " ";

        }
    }
    else if(p == n/2){
        for(int x = 0;x < n-p-2;x++){
            cout << " ";

        }
    }
    else if(p > n/2){
        for(int x = 0;x < n - p -1;x++){
            cout << " ";

        }
    }
}

int Y(){
    int haha = 0;
    n % 2 == 0 ? haha = 1 : haha = 0;
    cout << " ";

    if(p < n/2){
        for(int x = 0;x < p;x++){
            cout << " ";

        }
        cout << symbol;
        for(int x = 0;x < n - ((p+1)*2);x++){
            cout << " ";

        }
        cout << symbol;

    }
    else{
        for(int x = 0;x < n/2;x++){
            cout << " ";

        }
        cout << symbol;

    }
    if(p < n/2){
        for(int x = 0;x < p;x++){
            cout << " ";

        }
    }
    if(p >= n/2){
        for(int x = 0;x < n/2 - haha;x++){
            cout << " ";

        }
    }
}

int Z(){
    cout << " ";
    if(p == 0 || p == n-1){
        for(int x = 0;x < n;x++){
            cout << symbol;

        }
    }
    else{
        for(int x = 0;x < n - 1 - p;x++){
            cout << " ";

        }
        cout << symbol;

    }
    if(p < n-1){
        for(int x = 0;x < p+1;x++){
            cout << " ";
        }
    }
    if(p == n-1){
        cout << " ";
    }
}

int Space(){
    for(int x = 0;x < 5;x++){
        cout << " ";

    }
}

int FullStop(){
    for(int x = 0;x < 5;x++){
        if(x > 1 && x < 4 && (p == n-1 || p == n-2)){
            cout << symbol;
        }
        else{
            cout << " ";
        }
    }
}

int main(){
    int ascii;
    string name1;

	cout << "Note  : use '.' instead of space(' ')" << endl;
	cout << "Note  : use ',' instead of fullstop('.')" << endl;
    cout << "Input : name size symbol\n";
    cout << "Name  : ";
    getline(cin,name1);
    cout << "Size  : ";
    cin >> n;
    cout << "Symbol: ";
    cin >> symbol;

    char name[name1.size()];
    for(int i = 0;i < name1.size();i++){
        ascii = int(name1[i]);
        if(ascii >= 97 && ascii <= 122){
            ascii -= 32;
            name[i] = char(ascii);
        }
        else{
            name[i] = name1[i];
        }
        if(name1[i] == '.'){
            name[i] == '.';
        }
        else if(name1[i] == ','){
            name[i] == ',';
        }
    }
    cout << endl;
    p = 0;
    for(int z = 0;z < n;z++){
        for(int q = 0;q < name1.size();q++){
            if(name[q] == 'A'){A();}
            if(name[q] == 'B'){B();}
            if(name[q] == 'C'){C();}
            if(name[q] == 'D'){D();}
            if(name[q] == 'E'){E();}
            if(name[q] == 'F'){F();}
            if(name[q] == 'G'){G();}
            if(name[q] == 'H'){H();}
            if(name[q] == 'I'){I();}
            if(name[q] == 'J'){J();}
            if(name[q] == 'K'){K();}
            if(name[q] == 'L'){L();}
            if(name[q] == 'M'){M();}
            if(name[q] == 'N'){N();}
            if(name[q] == 'O'){O();}
            if(name[q] == 'P'){P();}
            if(name[q] == 'Q'){Q();}
            if(name[q] == 'R'){R();}
            if(name[q] == 'S'){S();}
            if(name[q] == 'T'){T();}
            if(name[q] == 'U'){U();}
            if(name[q] == 'V'){V();}
            if(name[q] == 'W'){W();}
            if(name[q] == 'X'){X();}
            if(name[q] == 'Y'){Y();}
            if(name[q] == 'Z'){Z();}
            if(name[q] == '.'){Space();}
            if(name[q] == ','){FullStop();}
        }
        p++;
        cout << endl;
    }
    return 0;
}
