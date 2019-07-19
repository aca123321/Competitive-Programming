#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,a,b;

    cin>>a>>b;

    i = 1;
    while(1)
    {
        if(pow(3,i)*a > pow(2,i)*b)
        {
            break;
        }
        else
        {
            i++;
        }
    }

    cout<<i;
}
