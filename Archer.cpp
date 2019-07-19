#include<bits/stdc++.h>
using namespace std;

main()
{
    long double a,b,c,d,sr,z,r,srr,ans;

    cin>>a>>b>>c>>d;

    sr = (a/b);
    srr = 1-sr;
    z = (c/d);

    z = 1-z;

    r = srr*z;

    ans = (sr/(1-r));

    cout<<fixed;
    cout<<setprecision(10);
    cout<<ans;
}
