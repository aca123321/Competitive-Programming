#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec  second

lli n,m,region_count=0;
lli mat[1000][1000];
lli visited[1000][1000];

bool isValid(lli i, lli j)
{
    if( i>=0 && i<n && j>=0 && j<m )
    {
        return true;
    }
    return false;
}

lli dfs_region_size(lli i, lli j)
{
    lli size = 1;
    visited[i][j] = 1;

    if(isValid(i+1,j))
    {
        if(visited[i+1][j] == 0 && mat[i+1][j] == mat[i][j])
        {
            size += dfs_region_size(i+1,j);
        }
    }
    if(isValid(i,j+1))
    {
        if(visited[i][j+1] == 0 && mat[i][j+1] == mat[i][j])
        {
            size += dfs_region_size(i,j+1);
        }
    }
    if(isValid(i-1,j))
    {
        if(visited[i-1][j] == 0 && mat[i-1][j] == mat[i][j])
        {
            size += dfs_region_size(i-1,j);
        }
    }
    if(isValid(i,j-1))
    {
        if(visited[i][j-1] == 0 && mat[i][j-1] == mat[i][j])
        {
            size += dfs_region_size(i,j-1);
        }
    }

    return size;
}

main()
{
    lli i,j,maxi=INT_MIN;

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(visited[i][j] == 0)
            {
                region_count++;
                maxi = max(maxi,dfs_region_size(i,j));
            }
        }
    }

    cout<<"largest region size = "<<maxi;
}
