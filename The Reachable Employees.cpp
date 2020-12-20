#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

vector<int> dist[100001], ret, graph[100001];
int visited[100001];

vector<int> order(int n, vector<int> x, vector<int> y, int start)
{
    for(i=0;i<n;i++)
    {
        visited[i] = 0;
        graph[x[i]].pb(y[i]);
        graph[y[i]].pb(x[i]);
    }

    dist[0].pb(start);
    dfs(start,0);

    /*
    visited[start] = 1;
    v.pb(start);
    ret.pb(start);
    for(auto it: ret)
    {
        for(i=0;i<graph[it].size();i++)
        {
            node = graph[it][i];
            v.pb(node);
        }
        sort(v.begin(),v.end());
        ret.insert(ret.end(),v.begin(),v.end());
        v.clear();
    }
    */
}

void bfs(int cur)
{
    int node,i;

    visited[cur] = 1;
    dist[d+1].pb(cur);

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(visited[node] == 0)
        {

        }
    }
}
