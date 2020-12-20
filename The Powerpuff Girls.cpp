#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,c,mini=INT_MAX;

    cin>>n;
    lli arr[n],brr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        a = min(a,brr[i]/arr[i]);
    }

    cout<<a;
}
