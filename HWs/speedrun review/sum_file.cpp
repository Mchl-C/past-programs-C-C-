#include <bits/stdc++.h>
using namespace std;
#define pb push_back

ifstream inputFile;
ofstream outputFile;
int main(){
    inputFile.open("sample.txt");
    vector<pair<double, double>> v;

    string s;
    while(getline(inputFile, s)){
        stringstream ss(s);
        double a, b;
        ss >> a >> b;
        v.pb({a, b});
    }

    inputFile.close();
    outputFile.open("final_result.txt");
    for(auto it : v){
        cout << setprecision(2) << fixed << it.first + it.second << endl;
        outputFile << setprecision(2) << fixed << it.first + it.second << endl;
    }
    outputFile.close();

}
