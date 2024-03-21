#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int temp=2;
    temp+=c/a;
    temp+=c/b;
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