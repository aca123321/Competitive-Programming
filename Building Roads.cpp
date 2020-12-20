#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli vis[100001];
vector<lli> graph[100001];

void dfs(lli cur)
{
    vis[cur] = 1;

    for(auto node: graph[cur])
    {
        if(vis[node] == 0)
        {
            dfs(node);
        }
    }
}

main()
{
    lli n,m,i,j,a,b,count=0;
    vector<lli> v;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    for(i=1;i<=n;i++)
    {
        if(vis[i] == 0)
        {
            count++;
            v.pb(i);
            dfs(i);
        }
    }

    cout<<v.size()-1<<endl;
    for(i=1;i<v.size();i++)
    {
        cout<<v[i-1]<<" "<<v[i]<<endl;
    }
}
