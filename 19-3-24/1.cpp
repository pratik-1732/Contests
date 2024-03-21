#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	int ans=0;
	ans+=a;
	int temp;
	// if(b%3==0){
	// 	ans+=(b/3);
	// 	if(c!=0){
	// 		int x=c/3;
	// 		ans+=(x+1);
	// 	}
	// 	cout<<ans<<endl;
	// 	return;
	// }
	// else{
	// 	while(b%3!=0){
	// 		if(c<=0) break;
	// 		b++;
	// 		c--;
	// 	}
	// 	//cout<<b<<" "<<c<<endl;
	// 	ans+=(b/3);
	// 	b=b%3;
	// 	if(b==0){
	// 		// ans+=(b/3);
	// 		if(c!=0){
	// 			int x=c/3;
	// 			ans+=(x+1);
	// 		}
	// 		cout<<ans<<endl;
	// 		return;
	// 	}
	// 	else{
	// 		cout<<-1<<endl; 
	// 		return;
	// 	}
	// }

	ans+=(b/3);
	b=b%3;
	if(b==0){
		ans+=(c/3);
		c=c%3;
		if(c!=0) ans++;
		cout<<ans<<endl; return;
	}
	c-=(3-b);
	ans++;
	if(c>=0){
		ans+=(c/3);
		c=c%3;
		if(c!=0) ans++;
		cout<<ans<<endl;
	}
	else cout<<-1<<endl;
	// ans+= min(b, c/2);
	// b-= min(b, c/2);
	// c-= min(b*2, c);

	// if(b>0 || c>0) cout<<-1<<endl;
	// else cout<<ans<<endl;
	
	
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