#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,tot=0,i,a;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        tot += a;
    }

    n++;

    if(tot%n == 0)
    {
        cout<<2;
    }

    else
    {
        cout<<1;
    }
}


