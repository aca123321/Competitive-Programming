#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,m,k,maxi=INT_MIN,a,b;
    cin>>n>>m>>k;

    lli arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());

    a = arr[0];
    b = arr[1];

    lli c,d,e,f;

    if(k>=m)
    {
        cout<<a*m;
    }

    else
    {
        c = m/(k+1);
        d = (a*k) + b;
        e = m%(k+1);
        f = (d*c)+(a*e);

        cout<<f;
    }
}
