#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,m,r,i,mini=INT_MAX,maxi=INT_MIN;

    cin>>n>>m>>r;
    lli arr[n],brr[m];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        mini = min(mini,arr[i]);
    }
    for(i=0;i<m;i++)
    {
        cin>>brr[i];
        maxi = max(maxi,brr[i]);
    }

    lli ans = max((r/mini)*(maxi)+(r%mini),r);

    cout<<ans;
}
