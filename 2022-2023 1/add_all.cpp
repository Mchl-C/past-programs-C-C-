#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    while(cin >> t){
        if (t == 0) break;
        int total = 0;
        priority_queue<int, vector<int>, greater<int>> q;

        for(int i = 0;i < t;i++){
            int n;
            cin >> n;
            q.push(n);
        }

        while(q.size() > 1){
            int sum = q.top();
            q.pop();
            sum += q.top();
            q.pop();

            total += sum;
            q.push(sum);
        }
        cout << total << endl;
    }
    return 0;
}
