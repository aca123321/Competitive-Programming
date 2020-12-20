#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

vector<lli> graph[100002];
lli visited[100002],dp[100002],root;

pair<lli,lli> dfs(lli cur, lli par)
{
    lli i,node,n,b=INT_MIN,c=1;
    n = graph[cur].size();
    pair<lli,lli> child;

    visited[cur] = 1;
    vector<lli> a;

    if(n <= 1)
    {
        dp[cur] = 0;
        return {1,0};
    }

    for(i=0;i<n;i++)
    {
        node = graph[cur][i];
        if(!visited[node] && node != par)
        {
            child = dfs(node,cur);
            a.pb(child.f);
            b = max(b,child.sec);
        }
    }
    sort(a.begin(),a.end(),greater<int>());
    c = a[0]+a[1];
    dp[cur] = max(b,c);
    return {a[0]+1,max(b,a[0]+a[1])};
}

main()
{
    lli n,i,a,b,c,t,j,k;

    cin>>n;
    pair<lli,lli> ans;

    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;

        graph[a].pb(b);
        graph[b].pb(a);
    }
    cin>>root;

    dp[root] = 0;
    ans = dfs(root,-1);

    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<dp[a]<<endl;
    }

}
