#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define sec second
#define pb push_back
#define mod 1000000007

lli arr[1000001];

lli dp(lli x)
{
    if(x < 0)
    {
        return 0;
    }
    return arr[x];
}

main()
{
    lli n,i,t,a,b,c;

    cin>>n;

    arr[0] = 1;
    for(i=1;i<=n;i++)
    {
        arr[i] = (dp(i-1)%mod + dp(i-2)%mod + dp(i-3)%mod + dp(i-4)%mod + dp(i-5)%mod + dp(i-6)%mod)%mod;
    }
    cout<<arr[n];
}
