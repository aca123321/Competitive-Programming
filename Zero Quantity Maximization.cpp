#include<bits/stdc++.h>
using namespace std;

#define lli long double
#define s second

map< lli , long int> m;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli d,maxi=0,extra=0;
    long int i,n;
    cin>>n;

    lli arr[n],brr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        cin>>brr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] == 0 && brr[i] == 0)
        {
            extra++;
        }

        else if(arr[i]!=0)
        {
            d = -1*(brr[i]/arr[i]);
            m[d]++;
        }
    }

    for(auto it: m)
    {
        if(it.s > maxi)
        {
            maxi = it.s;
        }
    }

    cout<<maxi+extra;
}
