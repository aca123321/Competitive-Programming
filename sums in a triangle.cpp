#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
/*
lli solvedp(vector<lli>* v)
{
    lli i,j,maxi=INT_MIN;

    for(i=1;i<=n;i++)
    {
        dp[][]=max(v[n][i]+v[n-1][i-1], v[n][i]+v[n-1][i])
    }
}
*/

main()
{
    lli t,i,j,n,a,count,k;

    cin>>t;

    while(t--)
    {
        cin>>n;
        vector<lli> v[n],dp[n];
        count = 0;

        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                cin>>a;
                v[i].pb(a);
            }

            for(k=j;k<n;k++)
            {
                v[i].pb(0);
            }
        }

        for(i=0;i<n;i++)
        {
            a = v[n-1][i];
            dp[n-1].pb(a);
        }

        for(i=n-1;i>0;i--)
        {
            for(j=0;j<n;j++)
            {
                if(j != n-1)
                {
                    a = max(dp[i][j]+v[i-1][j], dp[i][j+1]+v[i-1][j]);
                    dp[i-1].pb(a);
                }

                else
                {
                    dp[i].pb(dp[i][j]+v[i-1][j]);
                }
            }
        }

        cout<<dp[0][0]<<endl;
    }
}
