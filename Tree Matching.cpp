#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> graph[200001];
lli vis[200001], dp[200001][2];

void dfs(lli cur)
{
    lli node, i, sumi=0,sume=0, flag=-1,mini=INT_MAX, child_count=0;
    vis[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(vis[node] == 0)
        {
            dfs(node);
            child_count++;
            sumi += dp[node][1];
            sume += dp[node][0];
            if(dp[node][1] - dp[node][0] < mini)
            {
                mini = dp[node][1] - dp[node][0];
                flag = node;
            }
        }
    }

    if(child_count == 0)
    {
        dp[cur][0] = 0;
        dp[cur][1] = 0;
        return ;
    }

    dp[cur][0] = sumi;
    dp[cur][1] = sumi - dp[flag][1] + dp[flag][0] + 1;
    return;
}

main()
{
    lli n,i,a,b,c;

    cin>>n;

    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    dfs(1);

    cout<<max(dp[1][0], dp[1][1]);
}
