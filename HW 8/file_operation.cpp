#include <bits/stdc++.h>
using namespace std;

ifstream inputFile;
ofstream outputFile;

int main(){
    inputFile.open("sample.txt");

    map <int, pair <string, double>> mp;

    if (!inputFile.is_open()) {
        cerr << "Error opening sample.txt" << endl;
        return 1;
    }

    string line;
    // We can use the stream operators to read directly if the data format is consistent
    int acc_num;
    string name;
    double balance;

    // Read the file word by word/number by number
    while(inputFile >> acc_num >> name >> balance) {
        // Insert data into the map using the account number as the key
        mp[acc_num] = {name, balance};
    }



    cout << "--- Map Contents ---" << endl;

    for(auto& entry : mp) {
        cout << "Account: " << entry.first
             << " | Name: " << entry.second.first
             << " | Balance: " << fixed << setprecision(2) << entry.second.second << endl;
    }

    int n; string nama; double value;
    cout << "Enter the account to be updated: "; cin >> n;
    cout << "Enter the new name and balance: "; cin >> nama >> value;
    mp[n] = {nama, value};

    cout << endl;

    outputFile.open("sample.txt");
    for(auto &it : mp){
        outputFile << it.first << " " << it.second.first << " " << setprecision(2) << fixed << it.second.second << endl;
        cout << it.first << " | " << it.second.first << " " << setprecision(2) << fixed << it.second.second << endl;
    }

    outputFile.close();
    inputFile.close();

    return 0;
}
