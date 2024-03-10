#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t getSum(int k){
        int sum = 0;
        while (k != 0) {
            sum = sum + k % 10;
            k = k / 10;
        }
        return sum;
 }
    

// void solve(){
// 	// int n; cin>>n;
// 	// int sum=0;
	
// 	// if(n<=9){
// 	// 	for(int i=1; i<=n; i++){
// 	// 		sum+=i;
// 	// 	}
// 	// 	cout<<sum<<endl;
// 	// }
// 	// else{
// 	// 	sum+=45;
// 	// 	int p=n/10;
// 	// 	int q=n%10;
		
// 	// 	int tempS=0; int t=p;
// 	// 	while(t>0){
// 	// 		tempS+=(t%10);
// 	// 		t/=10;
// 	// 	}
// 	// 	//sum+=tempS;
// 	// 	for(int i=q; i>=0; i--){
// 	// 		sum+=(tempS+i);
// 	// 	}
		
// 	// 	p--;
// 	// 	while(p>0){
// 	// 		int que=p; tempS=0;
// 	// 		while(que>0){
// 	// 			tempS+=(que%10);
// 	// 			que/=10;
// 	// 		}
// 	// 		//sum+=tempS;
// 	// 		for(int i=9; i>=0; i--){
// 	// 			sum+=(tempS+i);
// 	// 		}
// 	// 		p--;
// 	// 	}
		
// 	// 	cout<<sum<<endl;
// 	// }

// }
const int n=2e5+1;
int32_t main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[n];
    a[0]=0,a[1]=1;
    for(int i=2;i<n;i++){
        a[i]=a[i-1]+getSum(i);
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }
}