#include<bits/stdc++.h>
using namespace std;

#define lli int

main()
{
    lli n,i,a=0,b=0;

    cin>>n;

    a = n%4;

    if(a == 1 || a== 2)
    {
        cout<<1;
    }

    else
    {
        cout<<0;
    }
}
