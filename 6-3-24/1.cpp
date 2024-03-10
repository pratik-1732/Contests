#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n,m;
	cin>>n>>m;
	int temp=n; int sum=0;
	while(temp!=1){
		sum+=temp/2;
		temp=temp/2;
	}
	if(sum>=m) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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