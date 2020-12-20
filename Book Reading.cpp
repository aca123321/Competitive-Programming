#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli ans,n,i,a,t,k,j,b,c,x,y,m;

    cin>>t;
    vector<lli> v[10];
    v[0].pb(0);
    map<lli, lli> s,sum;

    for(i=1;i<10;i++)
    {
        a = i;
        v[i].pb(i);
        a += i;
        a %= 10;
        while(a != i)
        {
            v[i].pb(a);
            a += i;
            a %= 10;
        }
    }

    for(i=1;i<10;i++)
    {
        s[i] = v[i].size();
        for(auto it: v[i])
        {
            sum[i] += it;
        }
    }
/*
    for(auto it: v)
    {
        for(auto iit: it)
        {
            cout<<iit<<" ";
        }
        cout<<endl;
    }
*/
    while(t--)
    {
        cin>>n>>m;
        a = n/m;
        b = m%10;

        if(b == 0)
        {
            cout<<0<<endl;
            continue;
        }

        ans = (a/s[b])*(sum[b]);
        for(i=0;i<(a%s[b]);i++)
        {
            ans += v[b][i];
        }

        cout<<ans<<endl;
    }

}
