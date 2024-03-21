#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	string s;
	cin>>s;
	int zero=0, one=0;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='0') zero++;
		else one++;
	}
	// vector<int> temp;
	// int x=0,y=0;
	// for(int i=0; i<s.length(); i++){
	// 	if(s[i]=='0') x++;
	// 	else y++;

	// 	int a=zero-x;
	// 	int b=one-y;

	// 	int left=(i+2)/2;
	// 	int right=n-i;
	// 	if(x>=left && y>=right){
	// 		temp.pb(1);
	// 	}
	// 	else temp.pb(0);
	// }
	// float mid= static_cast<float> (n) /2;
	// vector<pair<float, int>> ans;
	// for(int i=0; i<temp.size(); i++){
	// 	if(temp[i]==1){
	// 		float tem=abs(mid-(i+1));
	// 		ans.pb(make_pair(tem, i+1));
	// 	}
	// }
	// int m=0;
	// int mini=(n+1)/2;
	// if(one>=mini) m=1;
	// if(m==1) ans.pb(make_pair(mid,0));

	// sort(ans.begin(), ans.end());
	// cout<<ans[0].second<<endl;

	int ans=-1;
	int x=INT_MAX;
	if((n/2)+(n%2)<=one){
		x=n;
		ans=0;
	}
	int a=0, b=0;
	for(int i=0; i<n; i++){
		if(s[i]=='0'){
			zero--;
			a++;
		}
		else{
			one--;
			b++;
		}
		int left= a+b;
		int right= zero+one;
		if((left/2)+(left%2) <=a && (right/2)+(right%2) <=one){
			int temp= abs(left-right);
			if(temp<x){
				x=temp;
				ans=i+1;
			}
		}
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