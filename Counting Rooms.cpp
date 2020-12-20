#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

string s[1001];
lli n, m, vis[1001][1001];

bool isFloor(lli i, lli j)
{
    if( (i>=0) && (i<n) && (j>=0) && (j<m))
    {
        return (s[i][j]=='.');
    }
    return false;
}

void dfs(lli i, lli j)
{
    vis[i][j] = 1;
    if(isFloor(i-1,j) && vis[i-1][j] == 0)
    {
        dfs(i-1, j);
    }
    if(isFloor(i,j-1) && vis[i][j-1] == 0)
    {
        dfs(i, j-1);
    }
    if(isFloor(i+1,j) && vis[i+1][j] == 0)
    {
        dfs(i+1, j);
    }
    if(isFloor(i,j+1) && vis[i][j+1] == 0)
    {
        dfs(i, j+1);
    }
}

main()
{
    lli i,j,count=0;

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(vis[i][j] == 0 && s[i][j] == '.')
            {
                count++;
                dfs(i,j);
            }
        }
    }

    cout<<count;
}
