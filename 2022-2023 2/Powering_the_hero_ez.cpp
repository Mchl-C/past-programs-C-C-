#include <bits/stdc++.h>

using namespace std;

int t, n;
vector<int>bon;

int main(){
	cin>>t;

	while(t--){
		cin>>n;

		int ans=0, num;
		for(int i=0; i<n; i++){
			cin>>num;

			if(num!=0){
				bon.push_back(num);
			}else{
				if(!bon.empty()){
					ans+=bon.back();
					bon.pop_back();
				}
			}

			sort(bon.begin(), bon.end());
		}

		bon.clear();

		cout<<ans<<endl;
	}

	return 0;
}
