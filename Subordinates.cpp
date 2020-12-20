#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> graph[200001];
lli vis[200001], sub[200001];

lli dfs(lli cur)
{
    lli i, node, ret=0;
    vis[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(vis[node] == 0)
        {
            ret += dfs(node);
        }
    }

    sub[cur] = ret;
    return ret+1;
}

main()
{
    lli n,i,t,a,b,c;

    cin>>n;

    for(i=2;i<=n;i++)
    {
        cin>>a;
        graph[a].pb(i);
    }

    dfs(1);

    for(i=1;i<=n;i++)
    {
        cout<<sub[i]<<" ";
    }
}
