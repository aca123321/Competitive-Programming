#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

vector<lli> graph[200001];
lli vis[200001], dist_from_root[200001], ancestor[18][200001], timer=0, timin[200001], timout[200001];

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

void dfs(lli cur, lli dist)
{
    lli node, i;

    vis[cur] = 1;
    timer++;
    timin[cur] = timer;
    dist_from_root[cur] = dist;

    for(auto it: graph[cur])
    {
        node = it;
        if(vis[node] == 0)
        {
            ancestor[0][node] = cur;
            dfs(node, dist+1);
        }
    }
    timer++;
    timout[cur] = timer;
}

main()
{
    lli n,i,t,j,a,b,c,d,lca,ans;

    cin>>n>>t;

    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    ancestor[0][1] = 0;
    dfs(1, 0);

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

    /*
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<dist_from_root[i]<<endl;
    }

    for(i=0;i<7;i++)
    {
        for(lli j=1;j<=n;j++)
        {
            cout<<ancestor[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    while(t--)
    {
        cin>>a>>b;

        if(isAncestor(a,b))
        {
            cout<<dist_from_root[b]-dist_from_root[a]<<endl;
        }
        else if(isAncestor(b,a))
        {
            cout<<dist_from_root[a]-dist_from_root[b]<<endl;
        }
        else
        {
            c = a;
            for(i=17;i>=0;i--)
            {
                if(! isAncestor(ancestor[i][c], b))
                {
                    c = ancestor[i][c];
                }
            }
            lca = ancestor[0][c];
            ans = (dist_from_root[a]-dist_from_root[lca]) + (dist_from_root[b]-dist_from_root[lca]);
            cout<<ans<<endl;
        }
    }
}


