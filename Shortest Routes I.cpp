#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli vis[100001], dist[100001];
vector<lli> graph[100001];
set<pair<lli,lli>> s;
map<pair<lli,lli>, lli> w;

main()
{
    lli i,j,n,m,a,b,c,count=0,curd,curn,d;
    pair<lli,lli> cur;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        graph[a].pb(b);
        if(w[{a,b}] != 0)
        {
            w[{a,b}] = min(w[{a,b}], c);
        }
        else
        {
            w[{a,b}] = c;
        }
    }

    s.insert({0,1});

    while(count<n)
    {
        cur = *s.begin();
        curn = cur.sec;
        curd = cur.f;
        //cout<<"visiting "<<curn<<endl;

        if(!vis[curn])
        {
            vis[curn] = 1;
            dist[curn] = curd;
            //cout<<curn<<" -> "<<dist[curn]<<endl;
            count++;

            for(auto node: graph[curn])
            {
                if(!vis[node])
                {
                    d = dist[curn] + w[{curn, node}];
                    //cout<<"inserting node "<<node<<" at distance "<<d<<endl;
                    s.insert({d, node});
                }
            }
        }
        s.erase((s.begin()));
    }

    for(i=1;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }
}
