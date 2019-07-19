#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,n,i,x1,y1,x2,y2,flagx,flagy;

    cin>>t;

    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        flagx = flagy = 0;

        if(x2 > x1)
        {
            flagx = 1;
        }
        else if(x2<x1)
        {
            flagx = -1;
        }

        if(y2 > y1)
        {
            flagy = 1;
        }

        else if(y2 < y1)
        {
            flagy = -1;
        }

        if(flagx != 0 && flagy != 0)
        {
            cout<<"sad\n";
        }

        else
        {
            if(flagx == 0)
            {
                if(flagy == -1)
                {
                    cout<<"down\n";
                }
                else
                {
                    cout<<"up\n";
                }
            }

            else
            {
                if(flagx == -1)
                {
                    cout<<"left\n";
                }
                else
                {
                    cout<<"right\n";
                }
            }
        }
    }
}
