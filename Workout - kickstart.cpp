#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli diff[100000], n, k;

lli f(lli d)
{
    lli i,ret=0;

    for(i=0;i<n-1;i++)
    {
        ret += (diff[i]-1)/d;
    }
    return ret;
}

lli bin_search(lli start, lli end)
{
    if(start == end)
    {
        return start;
    }
    lli mid, a;
    mid = (start+end)/2;
    a = f(mid);
    //cout<<"additional reqd. sessions for d = "<<mid<<" : "<<a<<endl;
    if(a <= k)
    {
        return bin_search(start, mid);
    }
    return bin_search(mid+1, end);
}

main()
{
    lli i,t,a,b,j,l,maxi;
    lli arr[100001];
    cin>>t;

    for(l=1;l<=t;l++)
    {
        cin>>n>>k;
        maxi=INT_MIN;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>=1)
            {
                diff[i-1] = arr[i] - arr[i-1];
                maxi = max(maxi, diff[i-1]);
            }
        }
        //cout<<"maxi: "<<maxi<<endl;
        if(maxi <= 1)
        {
            cout<<"Case #"<<l<<": "<<maxi<<endl;
        }
        else
        {
            a = bin_search(1, maxi);
            cout<<"Case #"<<l<<": "<<a<<endl;
        }
    }
}
