#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

bool solve(){
	int n; cin>>n;
	vector<int> arr;
	vector<int> temp;
	 
	for(int i=0; i<n; i++){
		int x; cin>>x;
		arr.pb(x);
	}
	temp=arr;
	sort(temp.begin(), temp.end());
	
//	while(x>0){
	// for(int i=0; i<n; i++){
	// 	if(i+2>=n) break;
	// 	//if(i==0) continue;
	// 	for(int j=i+2; j<n; j++){

	// 		if(arr[i]>arr[j]) {
	// 			swap(arr[i],arr[j]);
	// 			i--;
	// 			break;
	// 		}
	// 	}
	// 	for(auto i: arr){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	//}
	// x--;
//}
	// for(auto i: temp){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	// for(auto i: arr){
	// 	cout<<i<<" ";
	// }
	// cout<<endl;
	// if(arr==temp) cout<<"YES"<<endl;
	// else cout<<"NO"<<endl;
	if(n>=4 && n==1) return true;
	else if(n==2){
		if(temp==arr) return true;
		else return false;
	}
	else{
		if(temp==arr) return true;
		else{
			swap(arr[0],arr[2]);
			if(temp==arr) return true;
			else return false;
		}
	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;

	while(t--){
	bool ans =solve();
	if(ans==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}

	return 0;
}