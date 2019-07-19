#include<bits/stdc++.h>
using namespace std;

main()
{
    long double x,y,a,b;

    cin>>x>>y;

    a = y*(log(x));
    b = x*(log(y));

    if(a>b)
    {
        cout<<">";
    }

    else if(a<b)
    {
        cout<<"<";
    }

    else if(a == b)
    {
        cout<<"=";
    }
}
