#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool solve(){
 		 int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a )cin>>i;
    for(int i=1;i<n-1;i++){
        if(a[i-1]*2 <= a[i]){
            a[i] -= a[i-1]*2;
            if(a[i] < 0) {
               return false;
            }
            a[i+1] -= a[i-1];
            a[i-1] = 0;
        }
        else{
            return false;
        } 
    }
    if(a[n-1] == 0 && a[n-2] == 0) return true;
    else return false;
        
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	bool ans=solve();
    if(ans==1) cout << "YES"<<endl;
    else cout << "NO"<<endl;
	}

	return 0;
}
