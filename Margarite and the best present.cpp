#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,magic,l,r,ans;

    cin>>n;

    while(n--)
    {
        cin>>l>>r;

        magic = (r - l + 1);

        if(magic%2 == 0)
        {
            if(l%2 == 0)
            {
                ans = -1 * (magic/2);
            }

            else
            {
                ans = (magic/2);
            }
        }

        else
        {
            if(l%2 == 0)
            {
                ans = (-1*((magic-1)/2)) + r;
            }

            else
            {
                ans = ((magic-1)/2) - r;
            }
        }

        cout<<ans<<endl;
    }
}
