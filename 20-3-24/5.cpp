#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

// string outputStr(vector<char> str){
// 	string temp="";
// 	for(auto i: str){
// 		temp+=i;
// 	}
// 	return temp;
// }
void solve(){
	int n; cin>>n;
	string s;
	cin>>s;
	//map<string, int> count;
	set<string> count;
	//count[s]++;
	count.insert(s);
	// vector<char> str;
	// for(int i=0; i<n; i++){
	// 	str.pb(s[i]);
	// }
	for(int i=0; i<n; i++){
		if(i+3>n || i+2>n) break;
		// char a=str[i];
		// char b=str[i+1];
		// char c=str[i+2];
		// str[i]=b;
		// str[i+1]=c;
		// str[i+2]=a;
		//string ans =outputStr(str);
		//cout<<ans<<" ";
		//count[ans]++;
		string temp1,temp2;
		temp1=s.substr(i,3);
		temp2=s.substr(i+3,n-i-3);
		string temp4="";
		if(i>0)
			temp4=s.substr(i-1, i);

		//char ch=temp1[0]; 
		string temp3="";
		temp3+=temp1[1]; temp3+=temp1[2]; temp3+=temp1[0];
		//cout<<temp1<<" "<<temp2<<" "<<temp3<<" "<<temp4<<" ";
		string ans="";
		if(temp4.empty()){
			ans+=temp3; ans+=temp2;
		}
		else{
			ans+=temp4; ans+=temp3; ans+=temp2;
		}
		//cout<<ans<<" "<<endl;
		s=ans;
		//count[ans]++;
		count.insert(ans);
	}	
	//cout<<endl;
	int len=count.size();
	len--;
	cout<<len<<endl;
	// for(auto i: count){
	// 	cout<<i.first<<" ";
	// }
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