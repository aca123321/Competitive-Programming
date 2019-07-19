#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,x,a,b,pre,count=0,maxi;

    cin>>n;
    lli arr[n];
    map<lli, lli> m;

    maxi = n/2;
    if(n%2 != 0)
    {
        maxi++;
    }

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }

    for(auto it: m)
    {
        if(it.s > maxi)
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
}
