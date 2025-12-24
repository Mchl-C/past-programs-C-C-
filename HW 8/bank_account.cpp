#include <bits/stdc++.h>
using namespace std;

ifstream inputFile;
ofstream outputFile;

struct data{
    string last;
    string name;
    double value;
    bool has_data = false;
};

void display(map<int, data> mp){
    cout << "-----[ Account List ]-----\n";
    for(auto &it : mp){
        if(it.second.has_data){
            cout << setw(5) << left << it.first << setw(10) << left << it.second.last << setw(10) << left\
            << it.second.name << it.second.value << endl;
        }
    }
}

int main(){

    bool run = true;
    while(run){
        int n;
        cout << "1. Before 1st operation, create a new database called \"credit.dat\"\n";
        cout << "2. Account List\n";
        cout << "3. Update an account\n";
        cout << "4. Add a new account\n";
        cout << "5. Delete an account\n";
        cout << "6. End program\n";
        cout << "? "; cin >> n;

        if(n == 1){
            outputFile.open("credit.dat");
            for(int i = 1;i <= 100;i++){
                outputFile << i << endl;
            }
            outputFile.close();
            cout << "New database of 100 accounts is created\n";
        }
        else if(n == 6) run = false;
        else{
            inputFile.open("credit.dat");
            if(!inputFile.is_open()){
                cout << "File does not exists or could no be opened. Select 0 first to create a new database!" << endl;
            }
            else{
                map <int, data> mp;
                int num; string line, ln, fn; double val;
                while(getline(inputFile, line)){
                    stringstream ss(line);
                    if(ss >> num){
                        data d;
                        if(ss >> ln >> fn >> val){
                            d.last = ln; d.name = fn; d.value = val; d.has_data = true;
                        }
                        else{
                            d.last = ""; d.name = ""; d.value = 0; d.has_data = false;
                        }
                        mp[num] = d;
                    }
                }
                inputFile.close();
                outputFile.open("credit.dat");
                if(n == 2){
                    display(mp);
                }
                else if(n == 3){
                    display(mp);
                    int choice;
                    cout << endl;
                    cout << "Enter account to update <1 - 100>: "; cin >> choice;
                    cout << setw(5) << left << choice << setw(10) << left << mp[choice].last << setw(10) << left\
                    << mp[choice].name << mp[choice].value << endl << endl;
                    double change;
                    cout << "Enter charge < + > or payment < - >: "; cin >> change;
                    mp[choice].value += change;
                    cout << setw(5) << left << choice << setw(10) << left << mp[choice].last << setw(10) << left\
                    << mp[choice].name << mp[choice].value << endl;
                }
                else if(n == 4){
                    int k;
                    string last, first; double balance;
                    cout << "Enter new account number <1 - 100>: "; cin >> k;
                    cout << "Enter lastname, firstName, balance" << endl;
                    cout << "? ";  cin >> last >> first >> balance;
                    data nd; nd.has_data = true; nd.last = last; nd.name = first; nd.value = balance;
                    mp[k] = nd;
                }
                else if(n == 5){
                    int k;
                    string last, first; double balance;
                    cout << "Enter new account number <1 - 100>: "; cin >> k;
                    data nd; nd.has_data = false; nd.last = ""; nd.name = ""; nd.value = 0;
                    mp[k] = nd;
                }

                for(auto &it: mp){
                    outputFile << it.first << " " << it.second.last << " " << it.second.name << " " << it.second.value << endl;
                }
                outputFile.close();
            }
        }
        cout << endl;
    }
    return 0;
}

