#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,q,l,r,a,b;

    cin>>q;

    for(i=0;i<q;i++)
    {
        cin>>l>>r>>a>>b;

        if(l<=a)
        {
            cout<<l<<" "<<b<<endl;
        }

        else
        {
            cout<<r<<" "<<a<<endl;
        }
    }
}
