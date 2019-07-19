#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define lli long long int

lli visited[100001];
long double prob[100001],ans=0;
vector<lli> graph[100001];

void dfs(lli cur,lli count,lli par)
{
    lli i,node;

    visited[cur] = 1;

    count++;

    if(count != 1)
    {
        if(par == 1)
        {
            prob[cur] = double(prob[par]*(double(1.0/double(graph[par].size()))));
        }

        else
        {
            prob[cur] = double(prob[par]*(double(1.0/double(graph[par].size() - 1))));
        }
    }

    else
    {
        prob[cur] = 1;
    }

    if(graph[cur].size() == 1 && cur != 1)
    {
        ans += (count-1)*(prob[cur]);
        return ;
    }

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(!visited[node])
        {
            dfs(node,count,cur);
        }
    }

    return ;
}

main()
{
    lli n,a,b,i;

    cin>>n;

    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;

        graph[a].pb(b);
        graph[b].pb(a);
    }

    prob[0] = 1;

    dfs(1,0,0);

    cout<<setprecision(10)<<ans;
}

