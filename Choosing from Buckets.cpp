#include<bits/stdc++.h>
using namespace std;

#define lld long long double
#define lli long long int

main()
{
    lld n,k,i,j,*sum;

    lli temp;

    cin>>n>>k;

    lld arr[n+1][k+1];
    lld sum[n+1]={0};

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            cin>>arr[i][j];
            sum[i] += arr[i][j];
        }
    }

    // arr[i][j] -> number of balls of colour j in bucket i

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            cin>>arr[i][j];
            sum[i] += arr[i][j];
        }
    }
}
