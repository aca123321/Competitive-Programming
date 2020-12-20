#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli arr[101],dp[101][101];

lli finddp(lli i, lli j)
{
    lli mini = INT_MAX,k,a;

    if(i == j)
    {
        return 0;
    }
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    for(k=i;k<j;k++)
    {
        a = finddp(i,k) + finddp(k+1,j) + arr[i-1]*arr[k]*arr[j];
        mini = min(mini, a);
    }
    dp[i][j] = mini;
    return dp[i][j];
}


main()
{
    lli n,i,t,a,b,c,j,k,x,y,l,mini;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            dp[i][i] = 0;
            for(j=1;j<n;j++)
            {
                if(j != 1)
                {
                    dp[i][j] = -1;
                }
            }
        }

        cout<<finddp(1,n-1)<<endl;
    }
}
