#include<bits/stdc++.h>
using namespace std;

main()
{
    int h,w,x,y,c,a,res;

    cin>>h>>w>>x>>y;

    c = h+w;
    h = max(h,w);
    w = c-h;

    c = x+y;
    x = max(x,y);
    y = c-x;

    a = __gcd(x,y);

    x /= a;
    y /= a;

    if(h>=x && w>=y)
    {
        res = min(floor(h/x),floor(w/y));
        cout<<x*res<<" "<<y*res;
    }

    else
    {
        cout<<0<<" "<<0;
    }
}
