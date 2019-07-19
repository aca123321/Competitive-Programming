#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,t,y,z,a,b,x;

    cin>>t;

    while(t--)
    {
        cin>>n>>a>>b;

        x = 0;
        y = 0;
        z = 0;

        lli arr[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            if((arr[i]%a == 0) && (arr[i]%b == 0))
            {
                x++;
            }

            else if((arr[i]%a == 0) && (arr[i]%b != 0))
            {
                y++;
            }

            else if((arr[i]%a != 0) && (arr[i]%b == 0))
            {
                z++;
            }
        }

        if(x%2 == 0)
        {
            if(y > z)
            {
                cout<<"BOB\n";
            }

            else
            {
                cout<<"ALICE\n";
            }
        }

        else
        {
            if((y+1) > z)
            {
                cout<<"BOB\n";
            }

            else
            {
                cout<<"ALICE\n";
            }
        }
    }
}
