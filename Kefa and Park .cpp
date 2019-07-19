#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define lli long long int

lli visited[100002];
vector<lli> graph[100002];
lli cat[100002],n,m,res=0;

void dfs(lli cur, lli count)
{
    lli i,node;

    visited[cur] = 1;

    if(cat[cur])
    {
        count++;
    }

    if(graph[cur].size() == 1 && (cur != 1) && (count <= m))
    {
        res++;
    }

    if(count > m)
    {
        return ;
    }

    if(!cat[cur])
    {
        count = 0;
    }

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(!visited[node])
        {
            dfs(node,count);
        }
    }

    return ;
}

int main()
{
    lli i,a,b;

    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        cat[i] = a;
    }

    for(i=0;i<(n-1);i++)
    {
        cin>>a>>b;

        graph[a].pb(b);
        graph[b].pb(a);
    }

    dfs(1,0);

    cout<<res;
}
