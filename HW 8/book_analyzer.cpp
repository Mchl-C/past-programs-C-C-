#include <bits/stdc++.h>
using namespace std;

ifstream file;

bool cmp(pair<string, int> a, pair<string, int> b) {return a.second > b.second;}

int main(){
    string title = "book.txt";
    file.open(title);
    map <string, int> mp;
    vector <pair<string, int>> v;

    string word;
    int total_words = 0;
    int unique_words = 0;
    while(file >> word){
        total_words ++;
        string w = word;
        while (!w.empty() && ispunct(w.back())) {
            w.pop_back(); // Remove the last character
        }
        // Also check/remove leading punctuation if necessary
        while (!w.empty() && ispunct(w.front())) {
            w.erase(0, 1); // Remove the first character
        }

        if(w.empty()) continue;
        for(auto &s : w) s = tolower(s);
        mp[w] ++;
    }

    for(auto &it: mp){
        v.push_back({it.first, it.second});
        unique_words ++;
    }
    sort(v.begin(), v.end(), cmp);

    cout << "The book being analyzed: " << title << endl;
    cout << "Total number of words: " << total_words << endl;
    cout << "Number of unique words: " << unique_words << endl;
    cout << "The most common words are: " << endl;
    int lim = 25, cnt = 1;
    for(auto &it: v){
        if(cnt >= lim) break;
        cout << setw(10) << left << it.first << it.second << endl;
        cnt ++;
    }

}
