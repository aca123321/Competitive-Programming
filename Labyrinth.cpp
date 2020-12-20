#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli n,m, vis[1001][1001];
vector<char> ans;
string s[10001];
pair<lli, lli> a,b;

bool isFloor(lli i, lli j)
{
    if( (i>=0) && (i<n) && (j>=0) && (j<m))
    {
        return (s[i][j]=='.' || s[i][j] == 'B');
    }
    return false;
}

bool dfs(lli i, lli j)
{
    bool p,q,r,s;
    vis[i][j] = 1;

    if(i == b.f && j == b.sec)
    {
        return true;
    }
    if(isFloor(i-1,j) && vis[i-1][j] == 0)
    {
        if(dfs(i-1, j))
        {
            ans.pb('U');
            return true;
        }
    }
    if(isFloor(i,j-1) && vis[i][j-1] == 0)
    {
        if(dfs(i, j-1))
        {
            ans.pb('L');
            return true;
        }
    }
    if(isFloor(i+1,j) && vis[i+1][j] == 0)
    {
        if(dfs(i+1, j))
        {
            ans.pb('D');
            return true;
        }
    }
    if(isFloor(i,j+1) && vis[i][j+1] == 0)
    {
        if(dfs(i, j+1))
        {
            ans.pb('R');
            return true;
        }
    }
}

main()
{
    lli i,j;

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j] == 'A')
            {
                a = {i,j};
            }
            else if(s[i][j] == 'B')
            {
                b = {i,j};
            }
        }
    }

    if(dfs(a.f, a.sec))
    {
        cout<<"YES\n";
        cout<<ans.size()<<endl;
        for(i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i];
        }
    }
    else
    {
        cout<<"NO\n";
    }
}
