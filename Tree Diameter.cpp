#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli end1, end2, maxi=INT_MIN, vis[200001],k;
vector<lli> graph[200001];

void dfs(lli cur, lli dist)
{
    lli node, i;

    vis[cur]++;
    if(dist > maxi)
    {
        end1 = cur;
        maxi = dist;
    }

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(vis[node] < k)
        {
            dfs(node, dist+1);
        }
    }
}

main()
{
    lli n,i,t,a,b;

    cin>>n;

    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    k = 1;
    dfs(1, 0);
    k=2;
    maxi = INT_MIN;
    dfs(end1, 0);
    cout<<maxi;
}
