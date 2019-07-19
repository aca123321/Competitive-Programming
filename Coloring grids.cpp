#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,k,ans;

    cin>>n>>k;

    if(n>2)
    {
        cout<<k;
    }
    else
    {
        if(n == 1)
        {
            cout<<k;
        }
        else
        {
            if(k>=2)
            {
                cout<<((k)*(k-1));
            }
            else
            {
                cout<<k;
            }
        }
    }

}
