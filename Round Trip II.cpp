#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

vector<lli> graph[100001];
lli vis[100001],k;
bool done = false;
lli s=-1,e=-1;
vector<lli> ans;

bool dfs(lli cur, lli par) //returns distance till the end node if it gets it
{
    vis[cur] = k;
    bool found = false;
    //cout<<"visiting "<<cur<<endl;

    for(auto node: graph[cur])
    {
        //cout<<"checking for par "<<cur<<", the node"<<node<<endl;
        if(vis[node]==k)
        {
            s = cur;
            e = node;
            ans.pb(cur);
            //cout<<"found loop from "<<s<<" to "<<e<<endl;
            return true;
        }
        else if(vis[node] == 0)
        {
            found = dfs(node, cur);
            if(found && !done)
            {
                ans.pb(cur);
                //cout<<"adding "<<cur<<" to ans\n";
                if(e == cur)
                {
                    done = true;
                    //cout<<"Done\n";
                }
                return true;
            }
            else if(found && done)
            {
                return true;
            }
        }
        if(s != -1 && e != -1)
        {
            break;
        }
    }
    return false;
}

main()
{
    lli n,m,i,j,a,b,count=0;
    bool found = false;

    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].pb(b);
    }

    for(i=1;i<=n;i++)
    {
        if(vis[i] == 0)
        {
            count++;
            k = count;
            found = dfs(i,0);
        }
        if(done)
        {
            ans.pb(ans[0]);
            cout<<ans.size()<<endl;
            for(j=ans.size()-1;j>=0;j--)
            {
                cout<<ans[j]<<" ";
            }
            break;
        }
    }
    if(! done)
    {
        cout<<"IMPOSSIBLE";
    }

}
