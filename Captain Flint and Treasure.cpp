#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[200001],brr[200001], visited[200001];
vector<lli> graph[200001];
stack<lli> st;
vector<lli> v,temp;

lli solve()
{
    lli ans=0,i;

    for(auto it: v)
    {
        ans += arr[it];
        if(brr[it] != -1)
        {
            arr[brr[it]] += arr[it];
        }
    }
    return ans;
}

void dfswithneg(lli cur)
{
    lli node,i;

    visited[cur] = 1;
    st.push(cur);
    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(visited[node] == 0)
        {
            dfswithneg(node);
        }
    }
    cout<<"top = "<<st.top()<<endl;
    v.pb(st.top());
    st.pop();
}

void dfs(lli cur)
{
    lli node,i;

    visited[cur] = 1;
    st.push(cur);
    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(visited[node] == 0 && arr[node] >= 0)
        {
            dfs(node);
        }
    }
    cout<<"top = "<<st.top()<<endl;
    v.pb(st.top());
    st.pop();
}

main()
{
    lli n,i,t,a,b,c,j,k,m,ans=0;

    cin>>n;
    v.clear();
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        visited[i] = 0;
        graph[i].clear();
    }
    while(!st.empty())
    {
        st.pop();
    }
    for(i=1;i<=n;i++)
    {
        cin>>brr[i];
        if(brr[i] != -1)
        {
            graph[i].pb(brr[i]);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i] == 0 && arr[i] >= 0 && brr != -1)
        {
            dfs(i,);
        }
    }

    for(i=1;i<=n;i++)
    {
        if(visited[i] == 0 && arr[i] >= 0 && brr[i] == -1)
        {
            dfs(i);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i] == 0 && arr[i] < 0 && brr[i] == -1)
        {
            dfswithneg(i);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i] == 0 && arr[i] < 0 && brr[i] == -1)
        {
            dfswithneg(i);
        }
    }

    cout<<"b4\n";
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    reverse(v.begin(),v.end());
    cout<<"after\n";
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl<<solve();

}
