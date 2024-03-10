#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	string s;
	cin>>s;
	// cout<<s<<endl;
	int cnt=0; int index=0;
	for(int i=1; i<n; i++){
		if(s[i]=='*' && s[i-1]=='*'){
			index=i;
			break;
		}
	}
	if(index==0) index=n;
	else index-=1;
	// cout<<index<<" ";
	for(int i=1; i<index; i++){
		
		if(s[i]=='@') cnt++;
	}
	cout<<cnt<<endl;
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