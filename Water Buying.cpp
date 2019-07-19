#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,q,i,a,b,c,d;

    cin>>q;

    while(q--)
    {
        cin>>n>>a>>b;

        c = (double)((double)(b)/(2.0));

        if(c>=(double)(a))
        {
            cout<<n*a<<endl;
        }

        else
        {
            cout<<((n/2)*(b)) + ((n%2)*(a))<<endl;
        }
    }

}
