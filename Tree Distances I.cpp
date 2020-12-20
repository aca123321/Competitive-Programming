#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

vector<lli> graph[200001];
lli vis[200001], height[200001], k, out[200001], best_child[200001][2];

// watch rachit jain's vid on this https://www.youtube.com/watch?v=Xng1Od_v6Ug
lli dfs(lli cur)
{
    lli i,node, maxi=INT_MIN, count=0, a;
    vector<pair<lli,lli>> v;

    vis[cur] = 1;
    best_child[cur][0] = -1;
    best_child[cur][1] = -1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(vis[node] < k)
        {
            count++;
            a = dfs(node);
            v.pb({a, node});
            maxi = max(maxi, a);
        }
    }

    if(count == 0)
    {
        height[cur] = 0;
        return 0;
    }
    if(count == 1)
    {
        best_child[cur][0] = v[0].sec;
        height[cur] = maxi + 1;
        return maxi + 1;
    }
    sort(v.rbegin(), v.rend());

    for(auto it: v)
    {
        best_child[cur][0] = v[0].sec;
        best_child[cur][1] = v[1].sec;
    }

    height[cur] = maxi+1;
    return maxi+1;
}

void dfs2(lli cur)
{
    lli node, i;

    vis[cur] = 2;
    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(vis[node] < k && best_child[cur][0] != node)
        {
            out[node] = max(out[cur]+1, height[cur]+1);
            dfs2(node);
        }
        else if(vis[node] < k && best_child[cur][0] == node)
        {
            if(best_child[cur][1] != -1)
            {
                out[node] = max(out[cur]+1, height[best_child[cur][1]] + 2);
            }
            else
            {
                out[node] = out[cur]+1;
            }
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

    k = 1;
    dfs(1);
    k = 2;
    out[1] = 0;
    /*
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<height[i]<<endl;
    }
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<best_child[i][0]<<" "<<best_child[i][1]<<endl;
    }
    */
    dfs2(1);
    /*
    for(i=1;i<=n;i++)
    {
        cout<<i<<" -> "<<out[i]<<endl;
    }
    */
    for(i=1;i<=n;i++)
    {
        cout<<max(out[i], height[i])<<" ";
    }

}
