#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli vis[100001];
vector<lli> graph[100001];
map<lli, pair<lli,lli>> mp;

main()
{
    lli n,m,i,j,a,b,cur;
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
        mp[i] = {0,-1};
    }

    queue<lli> q;

    q.push(1);
    mp[1] = {0,-1};
    vis[1] = 1;

    while(!q.empty())
    {
        cur = q.front();
        q.pop();

        for(auto node: graph[cur])
        {
            if(vis[node] == 0)
            {
                mp[node] = {mp[cur].f+1,cur};
                vis[node] = 1;
                q.push(node);
            }
            if(node == n)
            {
                break;
            }
        }
    }

    /*
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<mp[i].f<<" "<<mp[i].sec<<endl;
    }
    */

    cur = n;
    while(cur != -1)
    {
        ans.pb(cur);
        cur = mp[cur].sec;
    }

    if(mp[n].sec != -1)
    {
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
