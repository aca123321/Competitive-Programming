#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,x,y,z,a=0,b=0,c=0;

    cin>>x>>y>>z;
    cin>>a>>b>>c;

    if(x<=a)
    {
        if(y<=((a-x)+b))
        {
            if(z<=((a-x)+b-y+c))
            {
                cout<<"YES";
            }

            else
            {
                cout<<"NO";
            }
        }

        else
        {
            cout<<"NO";
        }
    }

    else
    {
        cout<<"NO";
    }



}
