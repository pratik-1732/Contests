#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
    int n; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        nums.pb(x);
    }   
    
    map<int, int> count;
    int cnt=0;
    for(int i=0; i<n; i++){
        int temp=nums[i];
        if(temp==1) {
            count[1]++;
            continue;
        }
        int x= (3*temp);
        int y=(temp-1);
        if(x%y==0){
            //cout<<count[x/y]<<endl;
            if(count[x/y]>0) cnt++;
        }

        count[temp]++;
    }
    cout<<cnt<<endl;
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