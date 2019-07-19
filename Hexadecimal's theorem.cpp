#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,sum=0,a=1,b=0,c;

    cin>>n;

    if(n == 0)
    {
        cout<<"0 0 0";
        return 0;
    }

    while(1)
    {
        if((a+b) == n)
        {
            break;
        }

        else
        {
            c = b;
            b = a;
            a = a+c;
        }
    }

    c = 0;

    cout<<a<<" "<<b<<" "<<c;
}
