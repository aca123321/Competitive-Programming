#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,m,i,a,b,c,x;
    cin>>n>>m;
    lli arr[n],brr[m];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>brr[i];
    }
    sort(arr,arr+n);
    sort(brr,brr+m);

    x = max(arr[n-1],2*arr[0]);

    if(x>=brr[0])
    {
        cout<<-1;
        return 0;
    }

    cout<<x;
}
