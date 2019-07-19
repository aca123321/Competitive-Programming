#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb(x) push_back(x)

main()
{
    lli i,n,k,ans = 0;

    cin>>n>>k;

    if(k<=(n/2))
    {
        ans += 2*(k-1) + (n-k);
    }

    else
    {
        ans += 2*(n-k) + (k-1);
    }

    ans += (2*(n)) + 1;

    cout<<ans;
}

