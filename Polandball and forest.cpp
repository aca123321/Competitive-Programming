#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)

vector<int> graph[10001];
int visited[10001];

void dfs(int cur)
{
    int i,node;

    visited[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(!visited[node])
        {
            dfs(node);
        }
    }

    return ;
}

main()
{
    int i,a,v,count=0;

    cin>>v;

    for(i=1;i<=v;i++)
    {
        cin>>a;

        graph[i].pb(a);
        graph[a].pb(i);
    }

    for(i=1;i<=v;i++)
    {
        if(!visited[i])
        {
            count++;
            dfs(i);
        }
    }

    cout<<count;
}
