#include<bits/stdc++.h>
using namespace std;

#define lli int

lli ifalleven(lli n)
{
    lli i=0, flag = 0;

    while(((n)/(pow(10,i))) != 0)
    {
        if((((n)%(pow(10,i+1)))%2) != 0)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}


main()
{
    lli n,t,i,a,b;

    cin>>t;

    while(t--)
    {
        cin>>n;

        i=0;
        while(1)
        {
            if(ifalleven(n+i) == 1)
            {
                a = n+i;
                break;
            }
            i++;
        }

        i=0;
        while(1)
        {
            if(ifalleven(n-i) == 1)
            {
                b = n-i;
                break;
            }
            i++;
        }

        if((a-n) <= (n-b))
        {
            cout<<a-n<<endl;
        }

        else
        {
            cout<<n-b<<endl;
        }
    }

}
