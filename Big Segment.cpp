#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,a,b,x;

    cin>>n;
    lli l[n],r[n];
    a = INT_MAX;
    b = INT_MIN;

    for(i=0;i<n;i++)
    {
        cin>>l[i]>>r[i];
        a = min(l[i],a);
        b = max(r[i],b);
    }

    for(i=0;i<n;i++)
    {
        if(l[i] == a && r[i] == b)
        {
            cout<<i+1;
            return 0;
        }
    }

    cout<<-1;
}
