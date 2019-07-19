#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)

int visited[10001],fir,maxi=INT_MIN,lvl=1;
vector<int> graph[10001];

void dfs(int cur, int count)
{
    int i,node;

    if(visited[cur] < lvl)
    {
        visited[cur]++;
    }
    count++;

    if(count > maxi && graph[cur].size() == 1)
    {
        maxi = count;
        fir = cur;
    }

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(visited[node] < lvl)
        {
            dfs(node,count);
        }
    }

    return ;
}

int main()
{
    int i,a,b,n,count;

    cin>>n;

    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;

        graph[a].pb(b);
        graph[b].pb(a);
    }

    dfs(1,0);
    lvl++;
    dfs(fir,0);

    cout<<maxi-1;
}
