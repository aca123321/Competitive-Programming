#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli i,n,a,b,c,d,count=0;

    cin>>n;
    lli x[n+1],y[n+1];

    x[0] = 0;
    y[0] = 0;

    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }

    if(x[n] == 0 && y[n] == 0)
    {
        cout<<1;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        a=x[i];
        b=y[i];
        c=x[i+1];
        d=y[i+1];

        if(a>=b && a<=d)
        {
            if(c>=d)
            {
                count += (d-a+1);
            }

            else
            {
                count += (c-a+1);
            }
        }

        else if(b>=a && b<=c)
        {
            if(d>=c)
            {
                count += (c-b+1);
            }

            else
            {
                count += (d-b+1);
            }
        }

    }

    cout<<count;
}
