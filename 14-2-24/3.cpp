#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	string p,c;
	cin>>p>>c;
	vector<int> ans;
	for(int i=0; i<n; i++){
		int x=p[i]-64;
		int y=c[i]-64;
		int diff=y-x;
		if(diff%3==0 && diff>=0){
			ans.pb(diff/3);
		}
		else{
			diff+=26;
			while(diff%3!=0){
				diff+=26;
			}
			ans.pb(diff/3);
		}
	}
	for(auto i: ans){
		cout<<i<<" ";
	}
	cout<<endl;
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