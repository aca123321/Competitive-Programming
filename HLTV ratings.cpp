#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,k,*arr,*frn,a,b;

    cin>>n>>k;

    lli frn[n] = {0};
    lli sum[n] = {0};
    arr = new lli[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<k;i++)
    {
        cin>>a>>b;

        frn[a]++;
        frn[b]++;
    }

    sum[0] = arr[i];

    for(i=1;i<n;i++)
    {
        sum[i] += sum[i-1] + arr[i];
    }

    for(i=0)
}
