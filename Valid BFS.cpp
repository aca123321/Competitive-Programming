#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli visited[200002]={0}, dist[200002],maxdist=0;
vector<lli> graph[200002];
vector <lli> v[200001];

void dfs(lli cur)
{
    lli node,n,i;

    visited[cur] = 1;
    n = graph[cur].size();

    for(i=0;i<n;i++)
    {
        if(dist[graph[cur][i]] > dist[cur] + 1)
        {
            dist[graph[cur][i]] = dist[cur] + 1;
            if(dist[graph[cur][i]] > maxdist)
            {
                maxdist = dist[graph[cur][i]];
            }
        }
    }

    for(i=0;i<n;i++)
    {
        node = graph[cur][i];
        if(visited[node] == 0)
        {
            dfs(node);
        }
    }

    return ;
}

main()
{
    lli n,i,a,b,j;

    cin>>n;
    lli arr[n];

    for(i=0;i<200002;i++)
    {
        dist[i] = INT_MAX;
    }

    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    dist[1] = 0;

    dfs(1);

    for(i=1;i<=n;i++)
    {
        a = dist[i];
        v[a].pb(i);
    }


}
