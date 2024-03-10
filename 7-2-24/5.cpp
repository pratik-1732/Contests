#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> p;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		p.pb(x);
	}
	map<int, int> count;
	for(auto i: p){
		count[i]++;
	}
	
	int maxi=n; int sum=0;
	for(int i=0; i<n; i++){
		sum=p[i]; int j=i+1;
		while(sum<maxi && j<n){
			sum+=p[j];
			if(sum>maxi) break;
			//cout<<sum<<endl;
			if(sum<=maxi) count[sum]++;
			else break;
			
			j++;
		}
		//sum=0;
	}
	for(auto i: count){
		cout<<i.second<<" ";
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