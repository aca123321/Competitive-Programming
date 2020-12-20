#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

vector<lli> graph[200001];
lli vis[200001], ancestor[18][200001], timer=0, timin[200001], timout[200001];

bool isAncestor(lli u, lli v)
{
    if(u == 0)
    {
        return true;
    }
    if(timin[u]<=timin[v] && timout[u]>=timout[v])
    {
        return true;
    }
    return false;
}

void dfs(lli cur)
{
    lli node, i;

    vis[cur] = 1;
    timer++;
    timin[cur] = timer;

    for(auto it: graph[cur])
    {
        node = it;
        if(vis[node] == 0)
        {
            dfs(node);
        }
    }
    timer++;
    timout[cur] = timer;
}

main()
{
    lli n,i,t,j,a,b,c,d;

    cin>>n>>t;

    for(i=2;i<=n;i++)
    {
        cin>>a;
        graph[a].pb(i);
        graph[i].pb(a);
        ancestor[0][i] = a;
    }

    ancestor[0][1] = 0;

    for(i=1;i<18;i++)
    {
        ancestor[i][0] = 0;
        for(j=1;j<=n;j++)
        {
            if(ancestor[i-1][j] != 0)
            {
                ancestor[i][j] = ancestor[i-1][ancestor[i-1][j]];
            }
            else
            {
                ancestor[i][j] = 0;
            }
        }
    }

    dfs(1);

    while(t--)
    {
        cin>>a>>b;

        if(isAncestor(a,b))
        {
            cout<<a<<endl;
        }
        else if(isAncestor(b,a))
        {
            cout<<b<<endl;
        }
        else
        {
            for(i=17;i>=0;i--)
            {
                if(! isAncestor(ancestor[i][a], b))
                {
                    a = ancestor[i][a];
                }
            }

            cout<<ancestor[0][a]<<endl;
        }
    }


}

