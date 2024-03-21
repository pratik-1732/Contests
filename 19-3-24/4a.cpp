#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
		int n,m;  cin>>n>>m;
		vector<int> a; 
		vector<int> b;
		for(int i=0; i<n; i++){
			int x; cin>>x;
			a.pb(x);
		} 
		for(int i=0; i<n; i++){
			int x; cin>>x;
			b.pb(x);
		} 
		int temp=0;
		int ans=INT_MAX;
		for(int i=n-1; i>=0; i--){
			if(i+1<=m){
				ans=min(ans, temp+a[i]);
			}
			temp+=min(a[i], b[i]);
		}
		cout<<ans<<endl;
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