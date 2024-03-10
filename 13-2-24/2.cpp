#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool solve(){
	int n; cin>>n;
	vector<int> water;
	int sum=0;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		sum+=x;
		water.pb(x);
	}
	int equal = sum/n;
	
	if(n==1) return true;

	int cnt=0;
	for(auto i: water){
		//cout<<i<<" "<<cnt<<endl;
		if(i==equal) continue;
		else if(i<equal && cnt==0) return false;
		else if(i>equal) cnt+=(i-equal);
		else if(i<equal && cnt>0) {
			int x=equal-i;
			if(cnt>=x) cnt-=x;
			else return false;
		}
	}
	
	return true;


}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	bool ans=solve();
	if(ans==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}

	return 0;
}