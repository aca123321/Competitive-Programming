#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592653589793
#define lli long double

main()
{
    lli n,i,r,ang,ans;

    cin>>n>>r;

    ang = ((n-2)*(180))/(2*n);

    ang = (ang/180)*pi;

    ans = (r/((1/cos(ang))-1));

    cout<<setprecision(9)<<ans;

}
