#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli vis[100001],n,m;
string s[1001];

main()
{
    lli i,j;
    cin>>n>>m;
    queue<pair<lli,lli>> q;
    map<lli, lli> m;

    for(i=0;i<m;i++)
    {
        cin>>s[i];
    }

    for(i=0;i<n;i++)
    {
        while(!q.empty())
        {
            q.pop();
        }
        m.clear();
        if(i == 0 || i == n-1)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j] == '.')
                {
                    q.push({i,j});
                }
                while()
            }
        }
        else
        {

        }
    }
}
