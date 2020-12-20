#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli dp[100002];

main()
{
    lli n,i,a,t,j,k,b,c,x,y;

    cin>>n>>k;
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    dp[0] = 0;
    for(i=1;i<=k;i++)
    {
        dp[i] = 0;
        for(j=0;j<n;j++)
        {
            if(i>=arr[j])
            {
                if(dp[i-arr[j]] == 0)
                {
                    dp[i] = 1;
                    break;
                }
            }
        }
    }

    if(dp[k] == 1)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
}
