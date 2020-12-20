#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli dp[100001];

main()
{
    lli n,i,a,b;

    cin>>n;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    dp[0] = 0;
    dp[1] = abs(arr[1]-arr[0]);

    for(i=2;i<n;i++)
    {
        dp[i] = min(dp[i-2]+abs(arr[i]-arr[i-2]), dp[i-1] + abs(arr[i]-arr[i-1]));
    }

    cout<<dp[n-1];

}
