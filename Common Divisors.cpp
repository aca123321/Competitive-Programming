#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli solve(lli n)
{
    lli count = 0,a=1;
    vector<lli> ans;

    while (!(n % 2))
    {
        n >>= 1;
        count++;
    }
    if (count)
    {
        ans.pb(count+1);
    }

    for (long long i = 3; i <= sqrt(n); i += 2)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n = n / i;
        }
        if (count)
        {
            ans.pb(count+1);
        }
    }
    if (n > 2)
    {
        ans.pb(2);
    }

    for(auto it: ans)
    {
        a *= it;
    }
    if(ans.size() == 0)
    {
        a = 1;
    }

    return a;
}

main()
{
    lli n,i,t,a,b,c,j,k,x,y;

    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(n == 1)
    {
        cout<<solve(arr[0]);
        return 0;
    }

    a = __gcd(arr[0],arr[1]);

    for(i=2;i<n;i++)
    {
        a = __gcd(a,arr[i]);
    }

    a = solve(a);
    cout<<a;

    return 0;
}
