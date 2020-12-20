#include<bits/stdc++.h>
using namespace std;

#define f first
#define pb push_back
#define sec second
#define lli long long int
#define INT_M 10000000000000000

map<pair<lli, lli>, lli> w;
vector<lli> graph[100001];
lli cost[100001][2];
int vis[100001];

main()
{
    lli n,m,i,j,a,b,c,sum,coupon_used,city;

    cin>>n>>m;

    for(i=2;i<=n;i++)
    {
        cost[i][0] = INT_M;
        cost[i][1] = INT_M;
    }

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        if(w[{a,b}] != 0)
        {
            if(w[{a,b}] > c)
            {
                w[{a,b}] = c;
            }
        }
        else
        {
            w[{a,b}] = c;
            graph[a].pb(b);
        }
    }

    set<pair<lli,pair<lli,lli>>> s;
    pair<lli,pair<lli,lli>> cur;

    s.insert({0,{1,0}});
    cost[1][0] = 0;
    cost[1][1] = 0;

    while(!s.empty())
    {
        cur = *(s.begin());

        sum = cur.f;
        city = (cur.sec).f;
        coupon_used = (cur.sec).sec;

        //cout<<"visiting "<<city<<endl;
        //cout<<"status: {"<<sum<<", {"<<city<<","<<coupon_used<<"}}\n";
        vis[city] = 1;

        for(auto node: graph[city])
        {
            //cout<<"checking for neighbour "<<node<<endl;

            if(vis[node] <= 2)
            {
                //cout<<node<<" not visited\n";
                if(coupon_used == 0)
                {
                    if(cost[node][0] < sum)
                    {
                        continue;
                    }

                    if( sum + w[{city,node}] <  cost[node][0]) //no coupons used
                    {
                        //cout<<"no coupon used for "<<city<<" to "<<node<<endl;
                        cost[node][0] = sum + w[{city,node}];
                        s.insert({cost[node][0],{node, 0}});
                    }
                    if( sum + (w[{city, node}]/2) < cost[node][1] ) //coupon used for this edge
                    {
                        //cout<<"1 coupon used for "<<city<<" to "<<node<<endl;
                        cost[node][1] = sum + (w[{city, node}]/2);
                        s.insert({cost[node][1],{node, 1}});
                    }
                }
                else //coupon used for some prior edge
                {
                    if(cost[node][1] < sum)
                    {
                        continue;
                    }

                    if( cost[city][1] + w[{city, node}] < cost[node][1] )
                    {
                        //cout<<"no coupon used for "<<city<<" to "<<node<<endl;
                        cost[node][1] = cost[city][1] + w[{city, node}];
                        s.insert({cost[node][1],{node, 1}});
                    }
                }
            }
        }

        s.erase(s.begin());
    }

    /*
    for(i=1;i<=n;i++)
    {
        cout<<i<<": "<<cost[i][0]<<", "<<cost[i][1]<<endl;
    }
    */

    cout<<min(cost[n][0],cost[n][1]);
}
