#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

bool compare(const pair<lli,lli> &i, const pair<lli,lli> &j )
{
    return i.sec <= j.sec;
}

main()
{
    lli n,i,j,a,b,c,t,cap,w,val,sum=0;
    vector<pair<lli,lli>> v;

    cin>>n>>cap;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.pb({b,a});
        sum += b;
    }

    lli dp[sum+1];
    dp[0] = 0;

    for(i=1;i<=sum;i++)
    {
        dp[i] = cap+1;
    }

    for(i=0;i<n;i++)
    {
        for(j=sum;j>=v[i].f;j--)
        {
            if(dp[j-v[i].f] < cap)
            {
                dp[j] = min(dp[j-v[i].f]+v[i].sec, dp[j]);
            }
        }
    }

    for(i=sum;i>=0;i--)
    {
        if(dp[i]<=cap)
        {
            cout<<i;
            return 0;
        }
    }
}
