#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

vector<lli> graph[2001];
lli visited[2001];
lli depth[2001];

lli dfs(lli cur)
{
    lli node,i;

    visited[cur] = 1;
    lli maxi = 0;

    if(graph[cur].size() == 0)
    {
        return 1;
    }

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(visited[node] == 0)
        {
            depth[node] = dfs(node);
        }
        maxi = max(maxi, depth[node]);
    }

    depth[cur] = maxi+1;

    return maxi+1;
}

main()
{
    lli n,i,a,b,c,j;
    cin>>n;
    vector<lli> par;

    for(i=0;i<n;i++)
    {
        cin>>a;
        graph[a].pb(i+1);
        par.pb(a);
    }

    lli maxi = 1;

    for(i=0;i<par.size();i++)
    {
        a = dfs(par[i]);
        if(a > maxi)
        {
             if(par[i] == -1)
             {
                 maxi = a-1;
             }
             else
             {
                 maxi = a;
             }
        }

    }

    cout<<maxi;
}
