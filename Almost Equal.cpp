#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,j,k,b,c;
    vector<lli> va,vb,ans,vans,v;

    cin>>n;

    va.pb(1);

    for(i=1;i<n;i++)
    {
        a = 2*i;
        b = a+1;
        if(i%2 == 0)
        {
            va.pb(a);
            va.pb(b);
        }
        else
        {
            vb.pb(a);
            vb.pb(b);
        }
    }

    if(n%2 == 0)
    {
        va.pb(2*n);
    }
    else
    {
        vb.pb(2*n);
    }
    for(i=0;i<n;i++)
    {
        ans.pb(va[i]);
    }
    for(i=0;i<n;i++)
    {
        ans.pb(vb[i]);
    }
    for(auto it: ans) vans.pb(it);
    for(auto it: ans) vans.pb(it);
    a = 0;
    for(i=0;i<n;i++)
    {
        a += ans[i];
    }
    v.pb(a);
    b = a;
    for(i=0;i<2*n;i++)
    {
        b += vans[i+n] - vans[i];
        v.pb(b);
    }
    map<lli, lli> m;
    for(auto it: v)
    {
        m[it]++;
    }
    if(m.size() > 2)
    {
        cout<<"NO";
    }
    else
    {
        i = 0;
        for(auto it: m)
        {
            if(i == 0)
            {
                a = it.f;
            }
            else
            {
                b = it.f;
            }
            i++;
        }
        if(abs(a-b) > 1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES\n";
            for(auto it: ans)
            {
                cout<<it<<" ";
            }
        }
    }
}
