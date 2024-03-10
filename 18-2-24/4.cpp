#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    int n; cin>>n;
    vector<int> years;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        years.pb(x);
    }
 
    int ans=years[0];
    for(int i=1; i<n; i++){
        int x=years[i];
        ans++;
        if(ans%x!=0){
            ans+=(x-ans%x);
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