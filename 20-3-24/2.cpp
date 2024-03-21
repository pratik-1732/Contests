#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	int ans=0;
	if(n%2==0){
		int x=n/2;
		ans+=(x+(12*x));
	}
	else{
		int x=n/2;
		ans+=(x+(12*x));
		ans+=6;
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