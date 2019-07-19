#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define s second
#define pb(x) push_back(x)

main()
{
    lli i,n,k;
    cin>>n;
    lli l[n],r[n];
    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
        arr[i] = r[i] - l[i] + 1;
    }

    cin>>k;



    for(i=0;i<n;i++)
    {
        if(k>arr[i])
        {
            k -= arr[i];
        }

        else
        {
            break;
        }
    }

    cout<<n-i;
}

