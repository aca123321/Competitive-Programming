#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli power(lli , lli);

main()
{
    lli t,a,b,temp,i,na,nb,diff,min;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        diff = 0;

        temp = a;

        na = 0;
        nb = 0;

        while(temp != 0)
        {
            temp /= 10;
            na++;
        }

        temp = b;

        while(temp != 0)
        {
            temp /= 10;

            nb++;
        }

        min = (na<=nb)?na:nb;

        cout<<na<<" "<<nb<<endl;

        for(i=0;i<min;i++)
        {
            cout<<a%10<<" "<<b%10<<endl;

            if( ((a%10) + (b%10)) > 9)
            {
                diff += power(10,i+1);
                cout<<diff<<endl;
            }

            a /= 10;
            b /= 10;
        }

        cout<<diff<<endl;
    }
}


lli power(lli a, lli b)
{
    if(b == 1)
    {
        return a;
    }

    return(a*power(a,b-1));
}
