#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

vector<lli> graph[200002];
vector<lli> red, blue;
lli visited[200002],colour[200002];

void dfscolour(lli cur)
{
    lli n,i,node;

    visited[cur] = 1;
    n = graph[cur].size();

    for(i=0;i<n;i++)
    {
        node = graph[cur][i];
        if(visited[node] == 0)
        {
            if(colour[cur] == 1)
            {
                colour[node] = 2;
                blue.pb(node);
            }
            else
            {
                colour[node] = 1;
                red.pb(node);
            }
            dfscolour(node);
        }
    }

    return ;
}

main()
{
    lli n,i,t,a,b,c,m;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        red.clear();
        blue.clear();

        for(i=1;i<=n;i++)
        {
            graph[i].clear();
            visited[i] = 0;
            colour[i] = 0;
        }

        for(i=0;i<m;i++)
        {
            cin>>a>>b;

            graph[a].pb(b);
            graph[b].pb(a);
        }

        red.pb(1);
        colour[1] = 1;
        dfscolour(1);

        if(red.size() <= blue.size())
        {
            cout<<red.size()<<endl;
            for(auto it: red)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }

        else
        {
            cout<<blue.size()<<endl;
            for(auto it: blue)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }

}
