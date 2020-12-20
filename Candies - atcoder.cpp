#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli dp[101][100001];
lli sum[101][100001];

main()
{
    lli n,i,a,t,b,c,j,k,x,y;

    cin>>n>>k;
    lli arr[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    arr[0] = 1;
    dp[0][0] = 1;
    sum[0][0] = 1;
    for(i=1;i<=k;i++)
    {
        dp[0][i] = 0;
        sum[0][i] = 1;
    }
    for(i=1;i<=n;i++)
    {
        dp[i][0] = 1;
        sum[i][0] = 1;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            x = j-arr[i];
            if(x>=0)
            {
                a = x;
            }
            else
            {
                a = 0;
            }
            b = j;
            c = (sum[i-1][b] - sum[i-1][a] + dp[i-1][a])%(1000000007);
            dp[i][j] = c;
            sum[i][j] = (sum[i][j-1] + dp[i][j])%(1000000007);
        }
    }
    /*
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            cout<<"("<<dp[i][j]<<", "<<sum[i][j]<<") ";
        }
        cout<<endl;
    }
    */
    cout<<(dp[n][k])%(1000000007);

}
