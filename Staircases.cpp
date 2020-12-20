#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli dp[500][500];

lli call(lli remain, lli prev)
{
    lli i,ways_for_curstep=0;

    if(remain == 0)
    {
        return 1;
    }
    if(remain<=prev)
    {
        return 0;
    }
    if(dp[remain][prev] != 0) // check if already calculated
    {
        return (dp[remain][prev]);
    }

    for(i=prev+1;i<=remain;i++)
    {
        ways_for_curstep += call(remain-i,i);
    }
    dp[remain][prev] = ways_for_curstep;

    return (dp[remain][prev]);

}

main()
{
    lli n;

    cin>>n;

    cout<<call(n,0)-1;
}
