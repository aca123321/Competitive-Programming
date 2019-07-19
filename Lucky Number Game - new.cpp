#include<bits/stdc++.h>
using namespace std;

#define lli int

main()
{
    lli n,t,arr[200005],i,a,b,j,x,y,z,k=0;

    cin>>t;
    lli ans[t] = {0};
    j=t;

    while(t--)
    {
        cin>>n>>a>>b;

        x = 0;
        y = 0;
        z = 0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if((arr[i]%a == 0)  && (arr[i]%b == 0))
            {
                x++;
            }

            else if((arr[i]%a == 0)  && (arr[i]%b != 0))
            {
                y++;
            }

            else if((arr[i]%a != 0)  && (arr[i]%b == 0))
            {
                z++;
            }
        }

        if(x > 0)
        {
            y++;
        }

        if(y>z)
        {
            cout<<"BOB";
        }

        else
        {
            cout<<"ALICE";
        }

        if(i != (j-1))
        {
            cout<<endl;
        }
    }
}
