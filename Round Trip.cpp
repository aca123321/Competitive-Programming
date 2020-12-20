#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

bool found = false;
lli vis[100001],n,m,startNode=-1,endNode=-1;
vector<lli> graph[100001];
map<lli, lli> mp;

void dfs(lli cur, lli par)
{
    vis[cur] = 1;
    mp[cur] = par;

    for(auto node: graph[cur])
    {
        if(vis[node] == 0)
        {
            dfs(node, cur);
        }
        else if(node != par)
        {
            startNode = cur;
            endNode = node;
            found = true;
            return;
        }
        if(found)
        {
            return;
        }
    }
}

main()
{
    lli i,a,b,cur;

    cin>>n>>m;
    vector<lli> ans;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    for(i=1;i<=n;i++)
    {
        if(vis[i] == 0 && !found)
        {
            dfs(i, -1);
        }
    }

    /*
    cout<<"mp:\n";
    for(auto it: mp)
    {
        cout<<it.f<<" "<<it.sec<<endl;
    }
    cout<<"start, end = ("<<startNode<<", "<<endNode<<")\n";
    */

    if(endNode != -1)
    {
        cur = startNode;
        while(cur != endNode)
        {
            ans.pb(cur);
            cur = mp[cur];
        }
        ans.pb(endNode);
        ans.pb(startNode);
        cout<<ans.size()<<endl;
        for(i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i]<<" ";
        }
    }
    else
    {
        cout<<"IMPOSSIBLE";
    }

}
