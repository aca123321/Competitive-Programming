#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,t,a,b,c,j,k,x,y,l,r;

    cin>>t;

    while(t--)
    {
        cin>>a>>b>>x>>y>>n;

        l = a-n;
        r = b-n;

        l = max(x,l);
        r = max(y,r);

        if(l<=r)
        {
            n -= (a-l);
            a = l;
            b = max(b-n, y);
            cout<<a*b<<endl;
        }
        else
        {
            n -= (b-r);
            b = r;
            a = max(a-n, x);
            cout<<a*b<<endl;
        }
    }

}
