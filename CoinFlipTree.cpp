#include<bits/stdc++.h>
using namespace std;

vector<int> graph[10001];
int visited[10001], flag[10001], start[10001];
int sum=0;

void coinFlipTree(int cur, int parFlag)
{
    visited[cur] = 1;
    if(flag[cur] + parFlag == 1)
    {
        start[cur] = 1 - start[cur];
        if(flag[cur] == 1)
        {
            parFlag = 1 - parFlag;
        }
    }

    for(i=0;i<graph[cur].size();i++)
    {
        node = graph[cur][i];
        if(!visited[node])
        {
            coinFlipTree(node, parFlag);
        }
    }
    return ;
}

void flipNode(int cur)
{
    flag[cur] = 1 - flag[cur];
}
