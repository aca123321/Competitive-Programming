#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli arr[200001],brr[200001];

main()
{
    lli n,i,a,b,c;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>brr[i];
    }

    lli maxi = 0;
    b = 0;
    for(i=1;i<=n;i++)
    {
        if(arr[i] != 0)
        {
            a = i-arr[i];
            a = max(a,b);
            maxi = max(maxi, a);
        }
    }s

    cout<<(2*n)-maxi<<endl;
}
