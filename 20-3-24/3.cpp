#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> sales;
	int sum=0; int maxi=INT_MIN;
	for(int i=0; i<n; i++){
		int x; cin>>x; 
		sum+=x;
		maxi=max(maxi,x);
		sales.pb(x);
	}	
	int temp=0; int k=0;
	vector<int> ans;
	for(int i=0; i<n; i++){
		k=sales[i]*2;
		// if(sales[i]==maxi){
		// 	temp+=(sales[i]*2);
		// 	if(temp>=sum){
		// 		cout<<temp<<endl;
		// 		return;
		// 	}
		// }
		ans.pb(k+temp);
		temp+=sales[i];
	}
	//cout<<sum<<endl;
	sort(ans.begin(), ans.end());
	// for(auto i: ans){
	// 	cout<<i<<" ";
	// }
	int len=ans.size(); len--;
	cout<<ans[len]<<endl;
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