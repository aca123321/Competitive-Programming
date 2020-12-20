#include<bits/stdc++.h>
using namespace std;

#define f first
#define pb push_back
#define sec second
#define lli long long int
#define INT_M 10000000000000000

map<pair<lli, lli>, lli> w;
vector<pair<lli,lli>> graph[100001];
lli dist[100001][10];

main()
{
    lli n,m,i,j,a,b,c,k,cur,sum,wt,node;

    cin>>n>>m>>k;

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        graph[a].pb({b,c});
    }

    for(i=1;i<=n;i++)
    {
        for(j=0;j<k;j++)
        {
            dist[i][j] = INT_M;
        }
    }
    dist[1][0] = 0;

    multiset<pair<lli,lli>> s;
    pair<lli,lli> pll;

    s.insert({0,1});

    while(!s.empty())
    {
        pll = *(s.begin());
        sum = pll.f;
        cur = pll.sec;
        s.erase(s.begin());

        if(sum > dist[cur][k-1])
        {
            continue;
        }
        for(auto it: graph[cur])
        {
            node = it.f;
            wt = it.sec;

            if(sum + wt < dist[node][k-1])
            {
                /*
                cout<<endl<<node<<" pre:\n";
                for(i=0;i<k;i++)
                {
                    cout<<dist[node][i]<<" ";
                }
                cout<<endl;
                */
                dist[node][k-1] = sum + wt;
                s.insert({dist[node][k-1], node});
                sort(dist[node], dist[node]+k);
                /*
                cout<<node<<" after:\n";
                for(i=0;i<k;i++)
                {
                    cout<<dist[node][i]<<" ";
                }
                cout<<endl;
                */
            }
        }
    }

    /*
    for(j=1;j<=n;j++)
    {
        cout<<j<<": ";
        for(i=0;i<k;i++)
        {
            cout<<dist[j][i]<<" ";
        }
        cout<<endl;
    }
    */
    for(i=0;i<k;i++)
    {
        cout<<dist[n][i]<<" ";
    }
}
