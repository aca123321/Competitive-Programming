#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

lli visited[10001];
vector<lli> graph[10001];

lli root;

void dfs(lli cur, lli res)
{
    lli i,node;

    visited[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(!visited[node])
        {
            dfs(node);
        }
    }

    return;
}

main()
{
    lli a,b,i,n;

    cin>>n;
    lli crr[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>a>>b;

        crr[i] = b;

        if(a == -1)
        {
            graph[i].pb(0);
            graph[0].pb(i);
            root = i;
        }

        else
        {
            graph[a].pb(i);
            graph[i].pb(a);
        }
    }

    dfs(0,res);
}
