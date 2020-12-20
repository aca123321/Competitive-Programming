#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define pb push_back
#define sec second

vector<lli> v;

main()
{
    lli n,i,a,b,maxi=INT_MIN,ans=INT_MIN;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        v.pb(a);
    }

    for(i=v.size()-1;i>=0;i--)
    {
        maxi = max(maxi, v[i]);
        v[i] = maxi - v[i];
        ans = max(ans, v[i]);
    }

    cout<<ans;
}
