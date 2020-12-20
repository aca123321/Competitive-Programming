#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli i,n,t,j,k,a,b,c,w,val;
    vector<pair<lli,lli>> v;

    lli cap;

    cin>>n>>cap;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.pb({b,a});
    }

    /*
    v.pb({89, 123});
    v.pb({90, 154});
    v.pb({95, 258});
    v.pb({100, 354});
    v.pb({90, 365});
    v.pb({79, 150});
    v.pb({50, 95});
    v.pb({10, 195});
    */

    lli dp[n+1][cap+1];

    for(i=0;i<=n;i++)
    {
        dp[i][0] = 0;
    }

    for(i=0;i<=cap;i++)
    {
        dp[0][i] = 0;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=cap;j++)
        {
            val = v[i-1].f;
            w = v[i-1].sec;
            if(j<w)
            {
                dp[i][j] = dp[i-1][j];
            }
            else
            {
                dp[i][j] = max(val+dp[i-1][j-w], dp[i-1][j]);
            }
        }
    }

    cout<<dp[n][cap];
}
