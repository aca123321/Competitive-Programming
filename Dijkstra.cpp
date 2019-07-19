#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli visited[1002]={0},start,en;
lli dist[1002]={0};
vector<lli> graph[1002];


void DFS_dijkstra(lli cur)
{
    lli node,n,i;

    n = graph[cur].size();
    visited[cur] = 1;

    for(i=0;i<n;i++)
    {
        node = graph[cur][i];
        if(dist[node] > (dist[cur] + 1))
        {
            dist[node] = (dist[cur] + 1);
        }
        if(visited[node] == 0)
        {
            DFS_dijkstra(node);
        }
    }

    return ;
}

main()
{
    lli n,i,a,num,b,ans;

    cout<<"Enter the number of edges of the tree\n";
    cin>>n;

    cout<<"Enter the number of nodes\n";
    cin>>num;

    cout<<"Enter the edges\n";
    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        graph[b].pb(a);
        graph[a].pb(b);
    }

    for(i=0;i<1002;i++)
    {
        dist[i] = INT_MAX;
    }

    cout<<"Enter the starting node\n";
    cin>>start;
    dist[start] = 0;

    DFS_dijkstra(start);
    cout<<" dist itself "<<dist[1]<<endl;

    for(i=1;i<=num;i++)
    {
        cout<<i<<" "<<dist[i]<<endl;
    }
}
