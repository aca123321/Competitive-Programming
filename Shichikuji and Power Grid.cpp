#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,j,b,c;
    cin>>n;

    lli c[n],k[n];
    lli cost[n][n];
    vector<pair<lli,lli>> v;
    lli dp[n][2];

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.pb({a,b});
    }

    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>k[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j == i)
            {
                cost[i][j] = 0;
            }
            else
            {
                cost[i][j] = (k[i]+k[j])*(abs(v[i].f - v[j].f) + abs(v[i].sec - v[j].sec));
                cost[j][i] = cost[i][j];
            }
        }
    }

    lli mini = INT_MAX;

    for(i=0;i<n;i++)
    {
        a = c[i];

        for(j=0;j<n;j++)
        {
            visited[j] = 0;
        }
        visited[i] = 1;

        for(j=0;j<n;j++)
        {
            if(j != i)
            {
                for()
            }
        }
    }

    cout<<mini;
}
