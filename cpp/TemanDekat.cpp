#include <iostream>
using namespace std;

int func(int d,int x1,int x2,int y1,int y2){
    int x,y,xp,yp,t;
    x = abs(x1 - x2);
    y = abs(y1 - y2);
    xp = x; yp = y;

    for(int i = 1;i < d;i++){
        x *= xp;
        y *= yp;
    }
    t = x + y;
    return t;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int n,d,res,min_num = 1e9,max_num = 0;
    cin >> n >> d;
    int List[n][2];

    for(int i = 0;i < n;i++){
        cin >> List[i][0] >> List[i][1];
    }
    for(int i = 0;i < n;i++){
        for(int p = 0;p < n;p++){
            if(i == p){continue;}
            else{
                res = func(d,List[i][0],List[p][0],List[i][1],List[p][1]);
                min_num = min(min_num,res);
                max_num = max(max_num,res);
            }
        }
    }
    cout << min_num << " " << max_num << endl;
}
