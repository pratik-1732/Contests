#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sp,ep;
	//cout<<s.length()<<endl;
	for(int i=0; i<s.length(); i++){
		if(s[i]=='B'){
			sp=i;
			break;
		}
	}
	//cout<<sp<<" ";
	for(int i=s.length()-1; i>=0; i--){
		if(s[i]=='B'){
			ep=i;
			break;
		}
	}
	//cout<<ep<<" ";
	
	cout<<ep-sp+1<<endl;
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