#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli dp[101][100001];

main()
{
    lli n,c,a,b,i,j;
    cin>>n>>c;
    lli w[n],v[n];

    for(i=0;i<n;i++)
    {
        cin>>w[i]>>v[i];
    }

    for(i=0;i<=c;i++)
    {
        if(i<w[0])
        {
            dp[0][i] = 0;
        }
        else
        {
            dp[0][i] = v[0];
        }
    }

    for(i=1;i<n;i++)
    {
        dp[i][0] = 0;
        for(j=1;j<=c;j++)
        {
            if(j<w[i])
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j] , (dp[i-1][j-w[i]] + v[i]));
            }
        }
    }

    cout<<dp[n-1][c];
}
