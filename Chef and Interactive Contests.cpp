#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,r,rat;

    cin>>n>>rat;

    while(n--)
    {
        cin>>r;

        if(r<rat)
        {
            cout<<"Bad boi\n";
        }

        else
        {
            cout<<"Good boi\n";
        }
    }
}
