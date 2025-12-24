// Source: https://usaco.guide/general/io
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ub upper_bound
#define lb lower_bound

#define rep(i,n) for(ll i=0; i<n; i++)
#define sot(v) sort(v.begin(),v.end())

int main(){
	ll n, t; cin>>n>>t;
    ll arr[n+5];
    rep(i,n) cin>>arr[i];
    sort(arr,arr+n);

    ll mid=n/2;
    while(t>0){
        arr[mid]++; t--;
        if(t<=0) break;
        for(ll i=mid+1; i<=n; i++){
            if(t<=0 && arr[i]<arr[mid]){cout<<arr[mid]-1<<endl; return 0;}
            if(t<=0) break;
            if(arr[i]<arr[mid]){t--; arr[i]++;}
            else break;
        }

        rep(i,n) cout<<arr[i]<<" ";
        cout<<"*"<<t<<"*"<<endl;
    }

    cout<<arr[mid]<<endl;

	return 0;
}
