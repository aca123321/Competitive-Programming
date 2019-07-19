#include<bits/stdc++.h>
using namespace std;

#define pb(x) push_back(x)

int visited[2001],max=INT_MIN;
vector<int> graph[2001];

void dfs(int cur,int count)
{
    int node,i;

    visited[cur] = 1;

    count++;

    if(count>::max)
    {
        ::max = count;
    }

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];

        if(!visited[node])
        {
            dfs(node,count);
        }
    }

    return ;
}

main()
{
    int n,i,*arr,num=0,a;

    cin>>n;
    arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>a;

        if(a == -1)
        {
            arr[num] = i+1;
            num++;
        }

        else
        {
            graph[i+1].pb(a);
            graph[a].pb(i+1);
        }
    }

    for(i=0;i<num;i++)
    {
        dfs(arr[i],0);
    }

    cout<<::max;
}
