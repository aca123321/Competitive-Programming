#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define pf push_front
#define f front
#define b back

lli visited[200002],tag[200002],par[200002];
vector<lli> graph[200002];
vector<lli , lli> dir[200002];

lli dfs(lli cur)
{
    lli i,node;

    visited[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(!visited[node])
        {
            if(tag[cur] == 1)
            {
                tag[node] = 2;

            }
            else if(tag[cur] == 2)
            {
                tag[node] = 1;
            }
            dfs(node);
        }

        else
        {
            if(tag[cur] == tag[node])
            {
                cout<<"NO"<<endl;
                return 1;
            }
        }
    }

    return 0;
}

main()
{
    lli a,b,i,n,m,c=0;
    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    tag[1] = 1;

    c = dfs(1);

    if(c == 0)
    {
        cout<<
    }
}

