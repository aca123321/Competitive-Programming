#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb push_back

main()
{
    lli n,m,i,a,b;

    cin>>n>>m;

    lli arr[n],sum[n]={0},val[m];
    lli l[m],r[m],dp[m]={0};

    cin>>arr[0];
    sum[0] = arr[0];

    for(i=1;i<n;i++)
    {
        cin>>arr[i];
        sum[i] = sum[i-1] + arr[i];
    }

    for(i=0;i<m;i++)
    {
        cin>>l[i]>>r[i];
        val[i] = sum[r[i]-1] - sum[l[i]-1] + arr[l[i]-1];
    }

    dp[0] = max(0,int(val[0]));

    for(i=1;i<m;i++)
    {
        dp[i] = dp[i-1] + max(0,int(val[i]));
    }

    cout<<dp[m-1];
}
