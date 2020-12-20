#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k,x,y;
    cin>>n;
    lli arr[n],dp[n][n],sum[n]={0};

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        dp[0][i] = arr[i];
    }
    sum[0] = arr[0];
    for(i=1;i<n;i++)
    {
        sum[i] += sum[i-1] + arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        dp[1][i] = arr[i] + arr[i+1];
    }

    for(i=2;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            a = dp[i-1][j] + (sum[j+i-1] - sum[j] + arr[j]) + arr[j+i];
            b = dp[i-1][j+1] + (sum[j+i] - sum[j]) + arr[j];

            dp[i][j] = min(a,b);
        }
    }

    cout<<dp[n-1][0];
}
