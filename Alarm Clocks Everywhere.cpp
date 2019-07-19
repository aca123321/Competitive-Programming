#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,m,start = 9999999999999999999,req;
    cin>>n>>m;

    lli arr[n],brr[n],diff[n-1];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(start>arr[i])
        {
            start = arr[i];
        }
    }

    sort(arr,arr+n);

    for(i=1;i<n;i++)
    {
        diff[i-1] = arr[i] - arr[i-1];
    }

    for(i=0;i<m;i++)
    {
        cin>>brr[i];
    }

    req = diff[0];

    for(i=1;i<(n-1);i++)
    {
        req = __gcd(req,diff[i]);
    }

    lli flag = 0;

    for(i=0;i<m;i++)
    {
        if(req%brr[i] == 0)
        {
            cout<<"YES\n";
            cout<<start<<" "<<i+1;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"NO";
    }
}
