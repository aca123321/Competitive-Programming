#include<bits/stdc++.h>
using namespace std;

#define lli long double
#define f first
#define pb push_back
#define sec second

lli p[100001], pos[100001], neg[100001];
vector<lli> v;

main()
{
    int n,m,i,j;
    lli a,b;

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>pos[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>neg[i];
    }

    for(i=0;i<n;i++)
    {
        a = (pos[i]*(p[i])) - (neg[i]*(1.00000-p[i]));
        v.pb(a);
    }

    sort(v.rbegin(), v.rend());

    a = 0;
    for(i=0;i<m;i++)
    {
        if(v[i] > 0)
        {
            a += v[i];
        }
        else
        {
            break;
        }
    }

    cout<<fixed<<setprecision(2)<<a;
}
