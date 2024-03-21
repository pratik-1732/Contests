#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        int sum=0;
        int ans=LLONG_MAX;
        for(int i=n-1;i>=0;i--)
        {
            if(i+1<=m)
            {
                ans=min(ans,sum+arr[i]);

            }
            sum+=min(arr[i],brr[i]);
        }
        cout<<ans<<endl;
    }
}