#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	//vector<vector<int>> grid;
	int cnt=0;
	vector<int> count;
	for(int i=0; i<n; i++){
		cnt=0;
		//vector<int> v;
		//for(int j=0; j<n; j++){
			string x; cin>>x;
			for(auto i: x){
				if(i=='1') cnt++;
			}
			
			//v.pb(x);
		//}
		//grid.pb(v);
		if(cnt!=0)	count.pb(cnt);
		//v.clear();
	}
	
	for(int i=0; i<n; i++){
		if(i+1<n && count[i]==count[i+1]){
			cout<<"SQUARE"<<endl;
			break;
		}
		else{
			cout<<"TRIANGLE"<<endl;
			break;
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	solve();
	}

	return 0;
}