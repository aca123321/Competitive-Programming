#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,k,minb = INT_MAX;
    cin>>n>>k;
    lli t[n], b[n],p[n],dp[n],count[n]={0},tmax=0,bmin=INT_MAX,ind=0;

    for(i=0;i<n;i++)
    {
        cin>>t[i];
        cin>>b[i];
    }

    for(i=0;i<n;i++)
    {
        p[i] = t[i]*b[i];
    }

    for(i=0;i<n;i++)
    {
        if(((t[i]+tmax)*(min(bmin,b[i]))) > p[i])
        {
            tmax = t[i]+tmax;
            bmin = min(bmin,b[i]);
            dp[i] = tmax*bmin;
            count[i] = count[i-1] + 1;
        }

        else
        {
            dp[i] = p[i];
            count[i] = 1;
        }
    }

    lli max=0;

    for(i=0;i<n;i++)
    {
        if(count[i]<=k && dp[i]>max)
        {
            max = dp[i];
        }
    }

    cout<<max;
}
