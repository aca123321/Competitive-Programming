#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second
#define mod 1000000007

lli dp[1001][1001];

main()
{
    lli n,m,a,b,c,i,j,k,x,y;

    cin>>n>>m;

    string s[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    dp[0][0] = 1;

    for(i=1;i<n;i++)
    {
        if(s[i][0] == '.')
        {
            dp[i][0] = dp[i-1][0];
        }
        else
        {
            dp[i][0] = 0;
        }
    }
    for(i=1;i<m;i++)
    {
        if(s[0][i] == '.')
        {
            dp[0][i] = dp[0][i-1];
        }
        else
        {
            dp[0][i] = 0;
        }
    }

    for(i=1;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(s[i][j] == '#')
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
            }
        }
    }

    cout<<dp[n-1][m-1];
}
