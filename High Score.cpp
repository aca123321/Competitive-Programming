#include<bits/stdc++.h>
using namespace std;

#define f first
#define pb push_back
#define sec second
#define lli long long int
#define INT_M 100000000000000

map<pair<lli, lli>, lli> tun;
lli dist[5001];

main()
{
    lli n,m,i,j,a,b,c,flag=0;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        if(tun[{a,b}] != 0)
        {
            if(tun[{a,b}] > -c)
            {
                tun[{a,b}] = -c;
            }
        }
        else
        {
            tun[{a,b}] = -c;
        }
    }
    dist[1] = 0;

    for(i=2;i<=n;i++)
    {
        dist[i] = INT_M;
    }

    for(i=1;i<n;i++)
    {
        for(auto it: tun)
        {
            a = (it.f).f;
            b = (it.f).sec;
            c = (it.sec);
            if(dist[a] == INT_M)
            {
                continue;
            }
            if(dist[a] + c < dist[b])
            {
                dist[b] = dist[a] + c;
            }
        }
    }

    for(i=1;i<n;i++)
    {
        for(auto it: tun)
        {
            a = (it.f).f;
            b = (it.f).sec;
            c = (it.sec);
            if(dist[a] == INT_M)
            {
                continue;
            }
            if(dist[a] + c < dist[b])
            {
                dist[b] = -INT_M;
            }
        }
    }

    if(dist[n] == -INT_M)
    {
        cout<<-1;
    }
    else
    {
        cout<<-dist[n];
    }
}
