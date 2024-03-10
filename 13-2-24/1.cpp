#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n;
	string s;
	if(n<=27){
		s+="aa";
		n-=2;
		char ch=n+96;
		s+=ch;
	}
	else if(n>27 && n<=52){
		s+="a";
		n-=27;
		char ch=n+96;
		s+=ch;
		s+="z";
	}
	else{
		n-=52;
		char ch=n+96;
		s+=ch;
		s+="zz";
	}
	cout<<s<<endl;
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