#include <bits/stdc++.h>
using namespace std;

int n;
int fib(int a, int b){
    int c = b;
    b += a;
    if(n % b == 0) return n*c/b;
    else if(b > n) return -1;
    return fib(c, b);
}

int main() {
    cin >> n;
    cout << fib(1, 1) << endl;
    return 0;
}

