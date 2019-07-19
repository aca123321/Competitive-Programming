#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli arr[100001],brr[100001],can[100001],need[100001];
lli i,n,k,a,b,mini= INT_MAX,maxi=INT_MIN,sum=0;

lli f(lli x)
{
    lli i,tot;
    tot = k;

    for(i=0;i<n;i++)
    {
        if(brr[i] < x*(arr[i]))
        {
            tot -= (x*arr[i] - brr[i]);
        }
        if(tot<0)
        {
            return 0;
        }
    }

    return 1; // satisfies
}

lli bin_search(lli low,lli high)
{
    lli mid;

    mid = (low+high)/2;

    if(low == mid)
    {
        if(f(high) == 1)
        {
            return high;
        }
        return low;
    }

    if(f(mid) == 1)
    {
        return (bin_search(mid,high));
    }

    return (bin_search(low,mid-1));
}

main()
{
    lli ans;

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        cin>>brr[i];
        can[i] = brr[i]/arr[i];
        maxi = max(maxi,((brr[i]+k)/arr[i]));
        mini = min(mini, can[i]);
    }

    ans = bin_search(mini,maxi+1);

    cout<<ans;
}
