#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,maxi=INT_MIN,j,k,l;
    vector<lli> v;

    cin>>n;
    lli sum[n]={0};

    cin>>k>>l;

    cin>>a;
    sum[0] = a;
    v.pb(a);

    for(i=1;i<n;i++)
    {
        cin>>a;
        sum[i] = sum[i-1] + a;
        v.pb(a);
    }

    if(l>k)
    {
        a = k;
        k = l;
        l = a;
    }

    if((k+l)>n)
    {
        cout<<-1;
        return 0;
    }

    for(i=0;i<n-k;i++)
    {
        a = sum[i+k-1] - sum[i] + v[i];
        for(j=0;j<n;j++)
        {
            if((j+l-1) < i)
            {
                b = sum[j+l-1] - sum[j] + v[j];
                maxi = max(maxi,a+b);
            }
            if(j>(i+k-1) && j+l-1 < n)
            {
                b = sum[j+l-1] - sum[j] + v[j];
                maxi = max(maxi,a+b);
            }
        }
    }

    cout<<maxi;
}
