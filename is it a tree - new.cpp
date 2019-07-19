#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define lli long long int

lli visited[10002];

vector<lli> graph[10002];

void dfs(lli cur)
{
    lli i,node;

    visited[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(!visited[node])
        {
            dfs(node);
        }
    }

    return ;
}

int main()
{
    lli n,m,a,b,i,flag=0;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;

        if(a == b)
        {
            graph[a].pb(a);
        }

        else
        {
            graph[a].pb(b);
            graph[b].pb(a);
        }
    }

    dfs(1);

    for(i=0;i<n;i++)
    {
        if(!visited[i+1])
        {
            flag = 1;
            cout<<"NO";
            return 0;
        }
    }

    if(flag == 0)
    {
        if(m != (n-1))
        {
            cout<<"NO";
        }

        else
        {
            cout<<"YES";
        }
    }

    return 0;
}


