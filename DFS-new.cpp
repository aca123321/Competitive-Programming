#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli visited[1002]={0};
vector<lli> graph[1002];

void DFS(lli cur)
{
    lli i,node,n;

    visited[cur] = 1;
    cout<<cur<<" ";
    n = graph[cur].size();

    for(i=0;i<n;i++)
    {
        node = graph[cur][i];

        if(visited[node] == 0)
        {
            DFS(node);
        }
    }

    return ;
}

main()
{
    lli i,n,a,b;

    cout<<"Enter the number of edges in the graph\n";
    cin>>n;

    cout<<"Enter the edges:\n";
    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        graph[a].pb(b);
        graph[b].pb(a);
    }

    DFS(1);
}
