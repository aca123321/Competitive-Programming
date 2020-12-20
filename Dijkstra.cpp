#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> graph[100002];
lli dist[100002],pre[100002];
map<pair<lli,lli>, lli> w;

void dfs(lli cur, lli d)
{
    lli i,n,node;
    n = graph[cur].size();

    for(i=0;i<n;i++)
    {
        node = graph[cur][i];
        if(d+w[{cur,node}] < dist[node])
        {
            pre[node] = cur;
            dist[node] = d+w[{cur,node}];
            dfs(node,d+w[{cur,node}]);
        }
    }

}

main()
{
    lli i,n,m,a,b,c,node;
    vector<lli> ans;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fill(dist+2,dist+100002,INT_MAX);

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        graph[a].pb(b);
        graph[b].pb(a);
        w[{a,b}] = c;
        w[{b,a}] = c;
    }

    dfs(1,0);

    if(dist[n] != INT_MAX)
    {
        node = n;
        do
        {   
            ans.pb(node);
            node = pre[node];
        }       
        while(node != 0);

        for(auto it=ans.rbegin();it<ans.rend();it++)
        {
            cout<<*it<<" ";
        }
    }
    else
    {
        cout<<-1;
    }
}
