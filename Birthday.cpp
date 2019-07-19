#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,m,k,l,i,ans,flag=0;

    cin>>n>>m>>k>>l;

    if(m>n)
    {
        cout<<"-1";
    }

    else
    {
        if(l>n)
        {
            cout<<"-1";
        }

        else
        {
            if(k>=l)
            {
                cout<<"0";
            }

            else
            {
                if(l%m == 0)
                {
                    ans = l/m;
                    flag++;
                }

                else
                {
                    ans = (l/m) + 1;
                    flag++;
                }
            }
        }
    }

    if(flag != 0)
    {
        cout<<ans;
    }
}
