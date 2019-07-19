#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)
#define lli long long int

lli visited[10002];

vector<lli> graph[10002];

int dfs(lli cur,lli par)
{
    lli i,node,p;

    visited[cur] = 1;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(visited[node] == 1)
        {
            if(node != par)
            {
                return 1;
            }
        }

        else
        {
            return (dfs(node,cur));
        }
    }

    return 0;
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

    if(m != n-1)
    {
        cout<<"NO";
        return 0;
    }

    else
    {
        a = dfs(1,0);

        if(a == 1)
        {
            cout<<"NO";
        }

        else
        {
            for(i=1;i<n+1;i++)
            {
                if(visited[i] == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                cout<<"YES";
            }

            else
            {
                cout<<"NO";
            }
        }
    }
}
