#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back


bool solve(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		a.pb(x);
	}
	
	vector<pair<int,int>> temp;
		for(int i=0; i<n;  i++){
			if(a[i]!=a[i+1])
			temp.pb(make_pair(a[i],i+1));
		}
		 map<int, int> pairs;
    	for (int i = 0; i < n - 1; i++){
        	if (a[i] != a[i + 1]){
            	pairs[i + 1]++;
        	}
    	}
 
		// cout<<endl;
		for(auto i: pairs){
			cout<<i.first<<" "<<i.second<<endl;
		}
		 cout<<endl;



	int q; cin>>q;
	
	while(q--){	
		int l,r;
		cin>>l>>r;

		auto index = pairs.lower_bound(l);
		cout<<index<<endl;
		int temp1=-1,temp2=-1;
		for(int i=l-1; i<r; i++){
			if(temp[i].first!=temp[i+1].first && i+1<r){
				temp1=i+1;
				temp2=i+2;
				break;
			}
		}
		cout<<temp1<<" "<<temp2<<endl;
	}
	cout<<endl;
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