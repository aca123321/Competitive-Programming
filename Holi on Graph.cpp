#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<pair<lli,lli>> graph[101];
lli n,m,k=0,a,b;

int dfs(lli cur)
{

}

main()
{
    lli i,t,c;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        graph[a].pb({b,c});
        graph[b].pb({a,c});
    }

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        c = dfs(a);

    }


}
