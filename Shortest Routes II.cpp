#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back
#define INT_M 1000000000001

lli dist[1001][1001];

main()
{
    lli n,m,t,a,b,c,i,j,k;

    cin>>n>>m>>t;

    for(i=1;i<=n;i++)
    {
        dist[a][a] = 0;
        for(j=1;j<=n;j++)
        {
            if(i != j)
            {
                dist[i][j] = INT_M;
            }
        }
    }

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        if(dist[a][b] > c && dist[a][b] != 0)
        {
            dist[a][b] = c;
            dist[b][a] = c;
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i != j)
            {
                for(k=1;k<=n;k++)
                {
                    a = dist[j][i] + dist[i][k];
                    dist[j][k] = min(dist[j][k], a);
                }
            }
        }
    }

    while(t--)
    {
        cin>>a>>b;
        if(dist[a][b] != INT_M)
        {
            cout<<dist[a][b]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
