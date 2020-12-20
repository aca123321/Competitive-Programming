#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,t,a,i,b,x,y,diff,c,d;

    cin>>t;

    while(t--)
    {
        cin>>x>>y;
        cin>>a>>b;

        if(y<x)
        {
            c = y;
            y = x;
            x = c;
        }
        diff = y-x;

        if(2*a < b)
        {
            c = (x+y)*a;
            cout<<c<<endl;
        }
        else
        {
            cout<<diff*a+(x*b)<<endl;
        }

    }

}
