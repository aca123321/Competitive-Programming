#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<pair<lli, lli>> graph[10001];
vector<lli> vis(10001, 0), dist(10001, INT_MAX);

main()
{
    lli n,i,t,a,b,c,j,ne, start,cur, node, weight;

    cout<<"Enter number of vertices:\n";
    cin>>n;
    cout<<"Enter number of edges:\n";
    cin>>ne;

    cout<<"Enter edges as u v w:\n";
    for(i=0;i<ne;i++)
    {
        cin>>a>>b>>c;
        graph[a].pb({b,c});
        graph[b].pb({a,c});
    }

    cout<<"Enter the starting node:\n";
    cin>>start;

    priority_queue<pair<lli,lli>> q; // stores -dist[u], u -> u is a node and dist[u] is the distance to the node (stored as negative because priority queue sorts in ascending prder)

    q.push({0,start});
    dist[start] = 0;

    while(!q.empty())
    {
        cur = q.top().sec;
        q.pop();
        if(vis[cur])
        {
            continue;
        }
        vis[cur] = 1;

        for(auto adjNode: graph[cur])
        {
            node = adjNode.f;
            weight = adjNode.sec;

            if(dist[cur] + weight < dist[node])
            {
                dist[node] = dist[cur] + weight;
                q.push({-dist[node], node});
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        cout<<i<<" "<<dist[i]<<endl;
    }
}

/*
Test set:
5
6
1 2 5
1 4 9
1 5 1
2 3 2
3 4 6
4 5 2
*/
