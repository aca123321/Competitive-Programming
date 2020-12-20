#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k;
    vector<lli> v;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        lli arr[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>k)
            {
                v.pb(arr[i]-k);
            }
        }



    }
}

/*
    i=0;
    while(i<n-1)
    {
        if(arr[i]>k)
        {
            a = arr[i]-k;
            arr[i] = k;
            arr[i+1] -= a;
        }
        i++;
    }
    b=0;
    for(i=0;i<n;i++)
    {
        b += arr[i];
    }
    cout<<b<<endl;
*/
