#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb(x) push_back(x)

map<lli,lli> mp;

main()
{
    lli i,n,m,j,flag=0,a;

    cin>>n>>m;

    vector<lli> v1[n+m-1], v2[n+m-1];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a;
            v1[i+j].pb(a);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a;
            v2[i+j].pb(a);
        }
    }

    for(i=0;i<(n+m-1);i++)
    {
        for(j=0;j<(v1[i].size());j++)
        {
            mp[v1[i][j]]++;
        }

        for(j=0;j<(v2[i].size());j++)
        {
            mp[v2[i][j]]--;
        }

        for(auto it: mp)
        {
            if((it.s) != 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            break;
        }

        else
        {
            mp.clear();
        }
    }

    if(flag == 1)
    {
        cout<<"NO";
    }

    else
    {
        cout<<"YES";
    }
}

