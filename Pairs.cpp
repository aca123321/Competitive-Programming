#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

lli arr[300002]={0};

main()
{
    lli n,i,a,b,m;

    cin>>n>>m;

    vector<lli> vn;
    vector<pair<lli, lli>> vp;

    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        vp.pb({a,b});
    }

    a = vp[0].f;
    b = vp[0].s;

    for(i=1;i<m;i++)
    {
        if(vp[i].f != a && vp[i].s != a)
        {
            vn.pb(i);
        }
    }

    for(auto it: vn)
    {
        arr[vp[it].f]++;
        arr[vp[it].s]++;
    }

    for(i=1;i<=n;i++)
    {
        if(arr[i] == vn.size())
        {
            cout<<"YES";
            return 0;
        }
    }

    vn.clear();

    for(i=1;i<m;i++)
    {
        if(vp[i].f != b && vp[i].s != b)
        {
            vn.pb(i);
        }
    }

    for(i=0;i<=n;i++)
    {
        arr[i] = 0;
    }

    for(auto it: vn)
    {
        arr[vp[it].f]++;
        arr[vp[it].s]++;
    }

    for(i=1;i<=n;i++)
    {
        if(arr[i] == vn.size())
        {
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";
    return 0;
}
