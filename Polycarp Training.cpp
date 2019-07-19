#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,a,b,sum=0;
    cin>>n;

    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(i=1;i<=n;i++)
    {
        if(arr[i-1]>=sum+1)
        {
            sum++;
        }
    }

    cout<<sum;
}

