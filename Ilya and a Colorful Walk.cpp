#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second

main()
{
    lli n,i,maxi=INT_MIN;
    cin>>n;
    lli arr[n+1];
    map<lli, lli> ms,me;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];

        if(ms[arr[i]] != 0)
        {
            me[arr[i]] = i;
        }
        else
        {
            ms[arr[i]] = i;
        }
    }

    for(auto it: ms)
    {
        if(me[it.f]-it.s > maxi)
        {
            maxi = me[it.f]-it.s;
        }
    }

    cout<<maxi;
}
