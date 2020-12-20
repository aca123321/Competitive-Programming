#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

lli dp[100001];

main()
{
    lli n,i,a,j,k,b;

    cin>>n>>k;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    dp[0] = 0;

    for(i=1;i<n;i++)
    {
        a = INT_MAX;
        for(j=1;j<=k;j++)
        {
            if(i>=j)
            {
                a = min(a,dp[i-j]+abs(arr[i]-arr[i-j]));
            }
            else
            {
                break;
            }
        }
        dp[i] = a;
    }

    cout<<dp[n-1];

}

