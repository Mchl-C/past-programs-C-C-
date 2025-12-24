#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    srand(time(NULL));
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> pq;

    double sum = 0;
    for(int i = 0;i < 10;i++){
        for(int j = 0;j < 10;j++){
            int num = rand() % 100;
            sum += num;
            pq.push(num);
            cout << num << " ";
        }
        cout << endl;
    }

    cout << endl;
    while(!pq.empty()){
        v.pb(pq.top());
        cout << pq.top() << " ";
        pq.pop();
    }
    double median = (v[49] + v[50])/2.0;
    sum /= 100.0;
    cout << endl;
    cout << sum << " " << median << endl;
}
