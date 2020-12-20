#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,t,b,c,j,k;

    cin>>n;
    lli arr[n];

    deque<lli> d;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    a = n/2;
    if(n%2 != 0)
    {
        a++;
    }
    b = 0;
    c = 0;
    for(i=0;i<n-a;i++)
    {
        b += arr[i];
    }
    for(i=n-a;i<n;i++)
    {
        c += arr[i];
    }

    b *= b;
    c *= c;

    cout<<(b+c);
}
