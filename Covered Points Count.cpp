#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first

main()
{
    lli n,l,r,i,a,b,sum=0;
    cin>>n;
    vector<lli> v;
    map<lli, lli> m;
    lli arr[n+1] = {0};

    for(i=0;i<n;i++)
    {
        cin>>l>>r;
        m[l]++;
        m[r+1]--;
    }

    for(auto it: m)
    {
        v.pb(it.f);
    }

    sort(v.begin(),v.end());

    for(i=1;i<v.size();i++)
    {
        sum += m[v[i-1]];
        arr[sum] += (v[i] - v[i-1]);
    }

    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
