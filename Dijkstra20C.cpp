#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb push_back

main()
{
    lli n,m,a,b,c,i,t,j,k;
    pair<lli, pair<lli,lli>> edge[10001];

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;

        edge[i].f = c;
        edge[i].s.f = a;
        edge[i].s.s = b;
    }

    sort(edge,edge+m);

    for(i=0;i<m;i++)
    {

    }

}
