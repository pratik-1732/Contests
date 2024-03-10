#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		a.pb(x);
	}
	vector<int> cnt(26,-1);
	string temp;
	for(auto i: a){
		for(int j=0; j<26; j++){
			if(cnt[j]<i){
				//cout<<j<<" ";
				cnt[j]++;
				//cout<<cnt[j]<<" ";
				char ch ='a'+j;
				//cout<<ch<<endl;
				temp+=ch;
				break;
			}
		}
	}
	cout<<temp<<endl;
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