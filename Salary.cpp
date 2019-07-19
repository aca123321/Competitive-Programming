#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,x,t;
    long double a,ans,nn,xx;

    cin>>t;

    while(t--)
    {
        cin>>x>>n;

        nn = n;
        xx = x;

        if(n%x == 0)
        {
            a = (n/x)-1;
        }

        else
        {
            a = (n/x);
        }

        ans = xx*(((a)*(a+1))/2);

        cout<<ans<<endl;
    }
}
