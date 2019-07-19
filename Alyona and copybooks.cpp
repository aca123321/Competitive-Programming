#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,a,b,c;
    double n;

    cin>>n;
    cin>>a>>b>>c;

    lli dp[5] = {0};
    dp[0] = 0;
    dp[1] = a;
    dp[2] = min(dp[1]+a,b);
    dp[3] = min(dp[2]+a,min(dp[1]+b, c));

    n = 4*(ceil(n/4)) - n;
    cout<<n<<endl;

    for(i=0;i<4;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;

    cout<<dp[int(n)];
}
