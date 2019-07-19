#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,a,i,c=0,z=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==5)
        {
            c++;
        }
    }

    z = n-c;

    if(c>=9)
    {
        if(z==0)
        {
            cout<<-1;
        }

        else
        {
            for(i=0;i<(c/9);i++)
            {
                for(a=0;a<9;a++)
                {
                    cout<<5;
                }
            }

            for(i=0;i<z;i++)
            {
                cout<<0;
            }
        }
    }

    else
    {
        if(z==0)
        {
            cout<<-1;
        }

        else
        {
            cout<<0;
        }
    }
}
