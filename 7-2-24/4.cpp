#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int x,y; cin>>x>>y;
	int a=y%x;
	y=x;
	x=a;
	while(x!=0){

		if(x>y){
			int temp=x;
			x=y;
			y=temp;
		}
		else{
			int temp=x;
			x=y-temp;
			y=temp;
		}
	}
	cout<<y<<endl;
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