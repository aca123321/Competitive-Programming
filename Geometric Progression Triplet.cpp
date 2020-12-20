#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,c,j,k,x,y;
    cin>>n>>k;
    lli arr[int(n)];
    map<lli,lli> dp1,dp2;

    for(i=0;i<n;i++)
    {
        cin>>arr[int(i)];
    }
    a = 0;
    for(i=0;i<n;i++)
    {
        if((arr[i]/(k*k))*(k*k) == arr[i])
        {
            a += dp2[arr[i]/k];
        }
        if((arr[i]/k)*k == arr[i])
        {
            dp2[arr[i]] += dp1[arr[i]/k];
        }
        dp1[arr[i]]++;
    }
    cout<<a;
}
