#include<bits/stdc++.h>
using namespace std;

main()
{
    int x,y,z,a=0;

    cin>>x>>y>>z;

    if((z-x)%(x-y) == 0) // z occurs at even position
    {
        cout<<((z-x)/(x-y))*2 + 1;
        a = 1;
    }

    else
    {
        if(z%(x-y) == 0)
        {
            cout<<(z/(x-y))*2;
            a = 1;
        }
    }

    if(a == 0)
    {
        cout<<"-1";
    }

}
