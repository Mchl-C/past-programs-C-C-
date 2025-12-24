#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int num[5] ={7920,11520,14400,18000};
int ans[5]={0,0,0,0};
int mins = 0;

int main(){
    int sisa=0;
    int x,y,z; cin>>x>>y>>z;

    if(x!=0){
        x*=5000;
        for(int i=3; i>=0; i--){
            while(x>=num[i]){
                if(i==1) ans[0]++;
                else if(i==0) ans[1]++;
                else ans[i]++;
                x-=num[i];
            }
        }
        if(y!=0 || z!=0){
            sisa+=7920-x;
            ans[1]++;
        }else mins+=x;
    }

    if(y!=0){
        y*=10000;
        y-=sisa;
        sisa=0;
        for(int i=3; i>=0; i--){
            while(y>=num[i]){
                if(i==1) ans[0]++;
                else if(i==0) ans[1]++;
                else ans[i]++;
                y-=num[i];
            }
        }

        if(z!=0){
            sisa+=7920-y;
            ans[1]++;
        }else mins+=y;
    }

    if(z!=0){
        z*=19000;
        z-=sisa;
        for(int i=3; i>=0; i--){
            while(z>=num[i]){
                if(i==1) ans[0]++;
                else if(i==0) ans[1]++;
                else ans[i]++;
                z-=num[i];
            }
        }
        mins+=z;
    }



    for(int i=0; i<4; i++){
        cout<<ans[i];
        if(i!=3) cout<<" ";
    }
    cout<<endl;
    cout<<mins<<endl;
}
