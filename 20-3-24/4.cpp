#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> nums;
	nums.pb(0);
	for(int i=1; i<=n; i++){
		int x; cin>>x;
		nums.pb(x);
	}	
	int cnt=0;
	for(int i=1; i<=n; i++){
		if(i==1 && nums[1]==1){
			swap(nums[1],nums[2]);
			cnt++;
		}
		if(nums[i]==i){
			if(i+1<=n && nums[i+1]!=i){
				swap(nums[i], nums[i+1]);
				cnt++;
			}
			else if(i-1>0 && nums[i-1]!=i){
				swap(nums[i],nums[i-1]);
				cnt++;
			}
		}
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