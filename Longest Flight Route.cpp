#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli dist[100001], par[100001];
vector<lli> graph[100001],ans;

main()
{
    lli n,m,i,j,a,b,d,cur;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
    }

    priority_queue<pair<lli,lli>> pq;
    dist[1] = 0;
    par[1] = 0;
    pq.push({0,1});
    pair<lli,lli> p;

    while(!pq.empty())
    {
        p = pq.top();
        pq.pop();
        d = p.f;
        cur = p.sec;

        //cout<<"at "<<cur<<endl;

        if(d < dist[cur])
        {
            continue;
        }

        for(auto node: graph[cur])
        {
            //cout<<"checking node "<<node<<endl;
            if(dist[node] < dist[cur] + 1)
            {
                dist[node] = dist[cur]+1;
                par[node] = cur;
                pq.push({dist[node], node});
            }
        }
    }

    if(dist[n] != 0)
    {
        cur = n;
        while(cur != 0)
        {
            ans.pb(cur);
            cur = par[cur];
        }
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
