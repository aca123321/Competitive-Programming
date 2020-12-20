#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[100001],h[100001];
vector<lli> graph[100001];

main()
{
    lli n,i,t,a,b,c,j,k,m;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            graph[i].clear();
        }
        for(i=0;i<n;i++)
        {
            cin>>h[i];
        }

        for(i=0;i<n-1;i++)
        {
            cin>>a>>b;
            graph[a].pb(b);
            graph[b].pb(a);
        }

    }


}
