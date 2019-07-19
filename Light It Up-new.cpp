#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli sumlit[100004]={0},sumoff[100004]={0};

main()
{
    lli n,i,m;

    cin>>n>>m;
    lli arr[n+2],tot[n+2]={0};
    lli sum[n+2] = {0};

    arr[0] = 0;
    cin>>arr[1];
    arr[n+1] = m;
    sumlit[0] = 0;
    sumlit[1] = arr[1];
    sumoff[0] = 0;
    sumoff[1] = 0;
    sum[0] = 0;
    sum[1] = arr[1];
    tot[0] = 0;
    tot[1] = arr[1];

    for(i=2;i<=n;i++)
    {
        cin>>arr[i];

        sum[i] += arr[i] + sum[i-1];
        tot[i] += arr[i] - arr[i-1];

        if(i%2 != 0)
        {
            sumlit[i] += sumlit[i-1] + arr[i]-arr[i-1];
            sumoff[i] = sumoff[i-1];
        }

        else
        {
            sumoff[i] += sumoff[i-1] + arr[i] - arr[i-1];
            sumlit[i] = sumlit[i-1];
        }
    }

    tot[n+1] = m-arr[n];

    if(n%2 == 0)
    {
        sumlit[n+1] += sumlit[n] + tot[n+1];
        sumoff[n+1] = sumoff[n];
    }

    else
    {
        sumoff[n+1] += sumoff[n] + tot[n+1];
        sumlit[n+1] = sumlit[n];
    }

    lli a,b,ans=sumlit[n+1];
/*
    for(i=0;i<n+2;i++)
    {
        cout<<i<<" "<<sumlit[i]<<" "<<sumoff[i]<<endl;
    }
*/
    for(i=1;i<=n+1;i++)
    {
        a = sumlit[n+1] - sumlit[i];
        b = sumoff[n+1] - sumoff[i];
/*
        cout<<i<<" "<<a<<" "<<b<<endl;
*/
        ans = max(ans,sumlit[i-1]+tot[i]-1+b);
    }

    cout<<ans;
}
/*
    for(i=0;i<n+2;i++)
    {
        cout<<i<<" "<<sumlit[i]<<" "<<sumoff[i]<<endl;
    }
*/
