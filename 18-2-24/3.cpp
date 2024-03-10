#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back


void solve(){
	int n,m;
	cin>>n>>m;
	vector<int> vals;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		vals.pb(x);
	}
	string s;
	cin>>s;
	vector<int> remenders;
	int prod=1;
	vector<int> divided;
	for(auto i: vals){
		int t=i%m; 
		if(t==0) {
			t=1;
			divided.pb(i);
		}
		
		prod*=t;
	}
	if(n!=1){
		int x=prod%m;
		remenders.pb(x);
	}
	else{
		int x=vals[0]%m;
		remenders.pb(x);
	}
	
	// for(int i=0; i<s.length(); i++){
	// 	if(vals.size()==1) break;

	// 	x=1; prod=1;
	// 	if(s[i]=='L'){
	// 		vals.erase(vals.begin());
	// 		for(auto i: vals){
	// 			prod*=i;
	// 		}
	// 		x=prod%m;
	// 		remenders.pb(x);
	// 	}
	// 	else{
	// 		remenders.pop_back();
	// 		for(auto i: vals){
	// 			prod*=i;
	// 		}
	// 		x=prod%m;
	// 		remenders.pb(x);
	// 	}
	// }
	int lcnt=0; int rcnt=n-1;
	for(int i=0; i<n; i++){
		if(lcnt>rcnt) break;
		if(lcnt==rcnt){
			int temp=vals[lcnt]%m;
			remenders.pb(temp);
			break;
		}
		
		if(s[i]=='L'){
			int temp=vals[lcnt];
			prod/=temp;
			int y=prod%m;
			remenders.pb(y);
			lcnt++;
		}
		else{
			int temp=vals[rcnt];
			prod/=temp;
			int y=prod%m;
			remenders.pb(y);
			rcnt--;
		}
	}
	for(auto i: remenders){
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