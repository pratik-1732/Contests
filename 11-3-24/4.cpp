#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin >> n;
    string s;cin >> s;
    int cnt = 0;
    for (int i = 0; i < n - 2; ++i) {
        if ((s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') ||
            (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p')) {
            cnt++;
            i += 2;
        }
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
