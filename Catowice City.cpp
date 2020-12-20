#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli out[1000002],visited[1000002],k;
vector<lli> graph[1000002],vj,vc;

void dfs(lli cur)
{
    lli i,node;

    visited[cur] = k;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(visited[node] != k)
        {
            dfs(node);
        }
    }

}

void modified_dfs(lli cur)
{
    lli i,node;
    visited[cur] = -k;

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(visited[node] != -k)
        {
            modified_dfs(node);
        }
    }
}

main()
{
    lli n,i,a,m,t,b,c,j,components;

    cin>>t;
    k = 0;
    while(t--)
    {
        components = 0;

        k++;
        cin>>n>>m;
        vj.clear();
        vc.clear();

        for(i=1;i<=n;i++)
        {
            graph[i].clear();
        }

        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            if(a != b)
            {
                graph[a].pb(b);
                out[a] = k; // node a has an outgoing edge
            }
        }

        for(i=1;i<=n;i++)
        {
            if(out[i] != k) //no outgoing edges from node i
            {
                vj.pb(i);
            }
            else
            {
                vc.pb(i);
            }
        }

        if(vj.size() != 0 && vc.size() != 0)
        {
            cout<<"Yes\n";
            cout<<vj.size()<<" "<<vc.size()<<endl;

            for(auto it: vj)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            for(auto it: vc)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                if(visited[i] != k)
                {
                    components++;
                    dfs(i);
                }
            }

            vj.clear();
            vc.clear();
            if(components >= 2)
            {
                modified_dfs(1);
                cout<<"Yes\n";
                for(i=1;i<=n;i++)
                {
                    if(visited[i] != -k)
                    {
                        vc.pb(i);
                    }
                    else
                    {
                        vj.pb(i);
                    }
                }
                cout<<vj.size()<<" "<<vc.size()<<endl;

                for(auto it: vj)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
                for(auto it: vc)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }
            else
            {
                cout<<"No\n";
            }

        }

    }
}
