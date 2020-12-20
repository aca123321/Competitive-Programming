#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli arr[101];
lli dp[101][101];

lli solve(lli start, lli end)
{
    lli a,b,c;

    if(start>end)
    {
        return 0;
    }
    else if(end-start <= 1)
    {
        cout<<dp[start][end]<<" ";
        return (dp[start][end]);
    }
    if(dp[start][end] != -1)
    {s
        cout<<dp[start][end]<<" ";
        return dp[start][end];
    }
    else
    {
        if(arr[start+1] < arr[end])
        {
            a = arr[start] + solve(start+1,end-1);
        }
        else if(arr[start+1] > arr[end])
        {
            a = arr[start] + solve(start+2,end);
        }
        else
        {
            a = arr[start] + max(solve(start+2,end) , solve(start+1,end-1));
        }
        if(arr[start] < arr[end-1])
        {
            b = arr[end] + solve(start,end-2);
        }
        else if(arr[start] > arr[end-1])
        {
            b = arr[end] + solve(start+1,end-1);
        }
        else
        {
            b = arr[end] + max(solve(start,end-2),solve(start+1,end-1));
        }

        if(a>b)
        {
            cout<<arr[start]<<" ";
        }
        else
        {
            cout<<arr[end]<<" ";
        }

        dp[start][end] = max(a,b);
        return (dp[start][end]);
    }
}

main()
{
    lli i,a,n,t,j,k,b,c;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            for(j=0;j<n;j++)
            {
                dp[i][j] = -1;
            }
            dp[i][i] = arr[i];
        }

        for(i=0;i<n-1;i++)
        {
            dp[i][i+1] = max(arr[i],arr[i+1]);
        }
        a = solve(0,n-1);
        cout<<a<<endl;
    }


}
