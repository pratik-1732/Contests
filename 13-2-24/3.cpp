#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve(){
	int n; cin>>n; 
	vector<int> arr;
	for(int i=0; i<n; i++){
		int x; cin>>x;
		arr.pb(x);
	}
	vector<int> count;

	int temp=arr[0]; int cnt=0;
	for(int i=0; i<n; i++){
		if(arr[i]==temp) cnt++;
		else break;
	}
	 count.pb(cnt);
	// temp=arr[n-1],cnt=1;
	 cnt=0;
	for(int i=n-1; i>=0; i--){
		if(arr[i]==temp) cnt++;
		else break;
	}
	count.pb(cnt);

	if(arr[n-1]!=arr[0]){
	 	temp=arr[n-1], cnt=0;
		for(int i=0; i<n; i++){
			if(arr[i]==temp) cnt++;
			else break;
		}
		count.pb(cnt);
		// temp=arr[n-1],cnt=1;
		cnt=0;
		for(int i=n-1; i>=0; i--){
			if(arr[i]==temp) cnt++;
			else break;
		}
		count.pb(cnt);
	}
	else{
		count.pb(0);
		count.pb(0);
	}
	// temp=arr[0],cnt=0;
	// int j=n-1;
	// for(int i=0; i<n; i++){
	// 	if(i>=j) break;

	// 	if(arr[i]==arr[j]){
	// 		cnt+=2;
	// 		j--;
	// 	}
	// 	else if(arr[i]==temp || arr[j]==temp){
	// 		cnt++;
	// 		break;
	// 	}
	// 	else break;
	// }
	//count.pb(cnt);
	// int maxi=INT_MIN;
	int sum=0; int maxi=INT_MIN;
	// for(int i=0; i<count.size(); i++){
	// 	cout<<count[i]<<" ";
	// 	//sum+=i;
	// 	//maxi=max(maxi,i);
	// }
	
	sum+=(count[0]+count[1]);
	maxi=max(maxi,sum);
	
	sum=0;
	sum+=(count[2]+count[3]);
	maxi=max(maxi,sum);
	

	if(maxi<n)
	cout<<n-maxi<<endl;
   else
   	cout<<0<<endl;
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