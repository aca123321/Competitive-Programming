#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second
/*
lli weight(lli left, lli right,lli pos, lli n)
{
    lli ans=0;
    ans += left*(pos-1);
    ans += right*(n-pos);
    return ans;
}
*/

bool comp(vector< pair<lli, lli> > :: iterator a, vector< pair<lli, lli> > :: iterator b )
{
    if(a->f > b->f)
    {
        return true;
    }

    return false;
}

main()
{
    lli n,i,a,b,sum=0;
    cin>>n;

    vector< pair<lli, lli> > v;
    vector< pair<lli, lli> > diffind;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v.pb({a,b});
        diffind.pb({(v[i].f-v[i].s),i});
    }

    sort(diffind.rbegin(),diffind.rend());

    for(i=0;i<n;i++)
    {
        sum += i*(v[(diffind[i].s)].f) + (n-1-i)*(v[(diffind[i].s)].s);
    }

    cout<<sum;
}
