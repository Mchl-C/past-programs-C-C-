#include <bits/stdc++.h>
using namespace std;

ifstream inputFile;
ofstream outputFile;

int main(){
    inputFile.open("file_1.txt");
    string s;
    map<int, pair<string, double>> mp;

    while(getline(inputFile, s)){
        stringstream ss(s);
        int acc; string name; double value;
        ss >> acc >> name >> value;
        cout << acc << " " << name << " " << value << endl;
        mp[acc] = {name, value};
    }

    inputFile.close();
    int ac; string name; double v;
    cin >> ac >> name >> v;
    mp[ac] = {name, v};

    outputFile.open("file_1.txt");
    for(auto &it : mp){
        cout << it.first << " | " << it.second.first << " " << setprecision(2) << fixed << it.second.second << endl;
        outputFile << it.first << " " << it.second.first << " " << setprecision(2) << fixed << it.second.second << endl;
    }
    outputFile.close();

    return 0;
}
