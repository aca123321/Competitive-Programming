#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,k,i,x,rem=1;

    cin>>n>>k;

    for(i=k-1;i>=1;i--)
    {
        if(n%i == 0)
        {
            rem = (i);
            break;
        }
    }

    x = (k*(n/rem))+rem;

    cout<<x;
}
