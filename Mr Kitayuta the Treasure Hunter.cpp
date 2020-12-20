#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[30000],n;

bool isValid(lli pos, lli l)
{
    if( (pos > arr[n-1]) || (l<=0) )
    {
        return false;
    }
    return true;
}

main()
{
    lli i,t,a,b,c,j,d;
    map<lli,lli> m;

    cin>>n>>d;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }

    a = m[d];

    lli dp[arr[n-1]][30001];

    for(i=1;i<30001;i++)
    {
        dp[0][i] = 0;
    }

    for(i=0;i<d;i++)
    {
        for(j=0;j<d;j++)
        {
            dp[i][j] = 0;
        }
    }

    dp[d][d] = m[d];

    for(i=0;i<d;i++)
    {
        dp[d][i] = 0;
    }

    maxi = m[d];
    for(i=d+1;i<arr[n-1];i++)
    {
        for(j=0;j<30001;j++)
        {
            dp[i][j] = max(dp[i-])
        }
    }
}
