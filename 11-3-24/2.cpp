#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool solve(){
    int n; cin >> n;
        vector<int> a;
        int sum=0;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            a.pb(x);
            sum+=a[i];
        }
        for(int i=1; i<n-1; i++) {
            if(a[i-1]<=a[i+1] && a[i]>=2*a[i-1]){
                a[i+1]-=a[i-1];
                a[i]-=a[i-1];
                a[i-1]=0;
            }
        }
        for(auto i: a){
            cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0; i<n; i++){
            if(a[i]!=0) return false;
        }
        return true;     
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