#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,x,y,a,b,k,low,high;

    cin>>y>>k>>n;

    if(n-y <= 0)
    {
        cout<<-1;
        return 0;
    }

    low = 1;
    high = n-y;

    a = (ceil(double(double(y)/double(k))))*double(k);

    x = a-y;

    if(x == 0)
    {
        x += k;
        a += k;
    }

    if(a>n)
    {
        cout<<-1;
        return 0;
    }

    while(x<=high)
    {
        cout<<x<<" ";
        x += k;
    }
}
