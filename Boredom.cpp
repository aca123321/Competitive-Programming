#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second

main()
{
    lli n,i,sum=0;

    cin>>n;
    lli brr[n];
    lli arr[100003]={0};
    lli dp[100003]={0};
    map<lli, lli> m;

    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        m[brr[i]]++;
        arr[brr[i]]++;
    }

    dp[1] = arr[1]*1;
    dp[2] = max(dp[1],arr[2]*2);
    dp[3] = max(arr[3]*3 + dp[1], dp[2]);

    if(n == 2)
    {
        cout<<max(dp[1],dp[2]);
        return 0;
    }

    for(i=4;i<100001;i++)
    {
        dp[i] = max((arr[i]*i)+dp[i-2] , dp[i-1] );
    }

    cout<<dp[100000];
}
