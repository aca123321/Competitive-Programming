#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,q,l,r,d,a,b;

    cin>>q;

    while(q--)
    {
        cin>>l>>r>>d;

        a = floor(double(l)/double(d))*d;
        b = ceil(double(r)/double(d))*d;

        if(d <= a && (a != l))
        {
            cout<<d;
        }

        else if(d<a)
        {
            cout<<d;
        }

        else
        {
            if(r%d == 0)
            {
                cout<<r+d;
            }

            else
            {
                cout<<b;
            }
        }

        if(q != 0)
        {
            cout<<endl;
        }
    }


}
