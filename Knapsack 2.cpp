#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back


main()
{
    lli n,c,a,b,i,j;
    cin>>n>>c;
    lli w[n],v[n];
    lli dp[100001];

    for(i=0;i<n;i++)
    {
        cin>>w[i]>>v[i];
    }
    for(i=1;i<=100000;i++)
    {
        dp[i] = c+1;
    }
    dp[0] = 0;
    for(i=0;i<n;i++)
    {
        for(j=100000;j>=v[i];j--)
        {
            if(dp[j-v[i]] < c)
            {
                dp[j] = min(dp[j], (dp[j-v[i]] + w[i]));
            }
        }
    }

    for(i=100000;i>=0;i--)
    {
        if(dp[i]<=c)
        {
            cout<<i;
            break;
        }
    }
}
