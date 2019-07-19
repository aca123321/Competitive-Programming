#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)

lli visited[10000];
vector<lli> graph[10000];

lli count = 0;

void dfs(lli cur)
{
    lli i,node;

    visited[cur] = 1;
    cout<<cur<<" ";

    ::count++;

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
    lli a,b,i,v,e;

    cout<<"no. of nodes in the graph:\n";
    cin>>v;

    cout<<"no. of edges in the graph:\n";
    cin>>e;

    for(i=0;i<e;i++)
    {
        cin>>a>>b;

        graph[a].pb(b);
        graph[b].pb(a);
    }

    dfs(0);

    cout<<"\ncount: "<<::count;
}

