#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
	else{
		
	int x=(n+1)/2;
	cout<<x<<" "<<x-1<<endl;
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