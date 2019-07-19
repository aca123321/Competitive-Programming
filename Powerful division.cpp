#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli t,i,x,flag;

    long double div,a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        flag = 0;

        if(a > b)
        {
            x = -1;
        }

        else
        {
            if((int(b))%(int(a)) == 0)
            {
                x = a;
            }

            else
            {
                div = b/a;

                if(float(div) == ceil(div))
                {for(i=2;i<=div;i++)
                {
                    if(int(div)%i == 0)
                    {
                        x = i;
                        flag = 1;
                        break;
                    }
                }}

                if(flag == 0)
                {
                    x = -1;
                }
            }
        }

        cout<<x<<endl;
    }
}
