#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool checkTemp(map<int, bool>& temp, int k){
	int t=0;
	for(auto i: temp){
		//if(i.second==false) return false;
		t++;
	}
	if(t!=k) return false;
	else
	return true;
}

bool solve(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a;
	vector<int> b;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		a.pb(x);
	}
	for(int i=0; i<m; i++){
		int x; cin>>x;
		b.pb(x);
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	map<int,int> acnt;
	map<int,int> bcnt;

	for(auto i: a){
		acnt[i]++;
	}
	for(auto i: b){
		bcnt[i]++;
	}
	// for(auto i: acnt){
	// 	cout<<i.first<<i.second<<" ";
	// }
	// cout<<endl;
	int temp1=0,temp2=0;
	map<int,bool> temp;
	for(auto i: acnt){
		if(i.first<=k){
			//temp1++;
			temp[i.first]=true;
			temp1++;
		}
		else break;
	}
	for(auto i: bcnt){
		if(i.first<=k) {
			//temp2++;
			temp[i.first]=true;
			temp2++;
		}
		else break;
	}
	bool output = checkTemp(temp,k);
	if(temp1>=k/2 && temp2>=k/2 && output==true) return true;
	else
		return false;

	// for(auto i: temp){
	// 	cout<<i.first<<i.second<<" ";
	// }
	// cout<<endl;
	// for(auto i: temp){
	// 	if(i.second==0) return false;
	// }

	//return true;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	bool ans =solve();
	if(ans==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}

	return 0;
}