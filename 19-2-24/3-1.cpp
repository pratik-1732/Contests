#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

int32_t getSum(int k)
    {
        int sum = 0;
        while (k != 0) {
            sum = sum + k % 10;
            k = k / 10;
        }
        return sum;
    }
    const int n=2e5+1;
int32_t main()
{
    int a[n];
    a[0]=0,a[1]=1;
    for(int i=2;i<n;i++)
    {
        a[i]=a[i-1]+getSum(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }
    return 0;
}