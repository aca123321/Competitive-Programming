#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

vector<lli> graph[100001];
lli visited[100001];
lli dp[100001];

lli dfs(lli cur)
{
    lli i,node,a=0;
    if(visited[cur] == 1)
    {
        return dp[cur];
    }
    visited[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(visited[node]  == 1)
        {
            a = max(a, 1+dp[node]);
        }
        else
        {
            a = max(a, 1+dfs(node));
        }
    }

    dp[cur] = a;
    return a;
}


main()
{
    lli n,m,i,j,a,b,c;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
    }
    a = 0;

    for(i=1;i<=n;i++)
    {
        if(graph[i].size() == 0)
        {
            dp[i] = 1;
            visited[i] = 1;
        }
        else
        {
            dp[i] = -1;
        }
    }

    for(i=1;i<=n;i++)
    {
        if(visited[i] == 0)
        {
            a = max(a,dfs(i));
        }
    }
    cout<<a-1;

}
