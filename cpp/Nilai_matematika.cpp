#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    char c;
    cin >> a >> c >> b;
    if(c == '='){
        a == b ? cout << "benar\n" : cout << "salah\n";
    }
    else if(c == '>'){
        a > b ? cout << "benar\n" : cout << "salah\n";
    }
    else if(c == '<'){
        a < b ? cout << "benar\n" : cout << "salah\n";
    }
    else if(c == '+'){
        cout << a + b << endl;
    }
    else if(c == '-'){
        cout << a - b << endl;
    }
    else if(c == '*'){
        cout << a * b << endl;
    }
    else if(c == '/'){
        cout << a / b << endl;
    }
    return 0;
}
