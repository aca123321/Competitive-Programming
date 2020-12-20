#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

vector<lli> graph[200001];
lli vis[200001], sumin[200001], sumout[200001], countin[200001], countout[200001];

pair<lli, lli> dfs1(lli cur)
{
    lli i,node;
    pair<lli, lli> p;

    vis[cur] = 1;
    sumin[cur] = 0;
    countin[cur] = 0;

    for(auto it: graph[cur])
    {
        node = it;
        if(vis[node] == 0)
        {
            p = dfs1(node);
            sumin[cur] += p.f;
            countin[cur] += p.sec;
        }
    }

    return {sumin[cur]+countin[cur]+1, countin[cur]+1};
}

void dfs2(lli cur)
{
    lli node, i;

    vis[cur] = 2;

    for(auto it: graph[cur])
    {
        node = it;
        if(vis[node] == 1)
        {
            countout[node] = countout[cur] + countin[cur] - countin[node];
            sumout[node] = sumout[cur] + sumin[cur] - sumin[node] + countout[cur] + countin[cur] - (2*countin[node]) - 1;
            dfs2(node);
        }
    }
}

main()
{
    lli n,i,a,b;

    cin>>n;

    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    dfs1(1);
    countout[1] = 0;
    sumout[1] = 0;
    dfs2(1);

    /*
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<sumin[i]<<" "<<sumout[i]<<" \n";
    }
    */

    for(i=1;i<=n;i++)
    {
        cout<<sumin[i] + sumout[i]<<" ";
    }

}
