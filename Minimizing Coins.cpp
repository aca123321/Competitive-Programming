#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back

lli arr[101], d[1000001];

lli dp(lli x)
{
    if(x < 0)
    {
        return INT_MAX-1;
    }
    return d[x];
}

main()
{
    lli n,i,t,a,b,c,x;

    cin>>n>>x;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    d[0] = 0;

    for(i=1;i<=x;i++)
    {
        d[i] = INT_MAX;
        for(lli j=0;j<n;j++)
        {
            a = d[i];
            b = dp(i-arr[j]) + 1;
            d[i] = min(a,b);
        }
    }

    if(d[x] == INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<d[x];
    }
}
