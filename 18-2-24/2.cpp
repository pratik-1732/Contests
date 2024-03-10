#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> signs;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		signs.pb(x);
	}
	int temp=0;
	set<int> ans;
	for(int i=0; i<n; i++){
		int y=1;
		int l=signs[i];
		while(true){
			if(signs[i]>temp && ans.find(signs[i])==ans.end()){
				break;
			}
			signs[i]=y*l;
			y++;
		}
		ans.insert(signs[i]);
		temp=signs[i];
	}
	cout<<signs[n-1]<<endl;
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