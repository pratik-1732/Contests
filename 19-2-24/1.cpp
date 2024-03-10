#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	string s;
	cin>>s;
	int cnt=0;
	for(auto i: s){
		if(i=='A') cnt++;
	}
	int x=s.length()-cnt;
	if(cnt>x) cout<<"A"<<endl;
	else cout<<"B"<<endl;
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