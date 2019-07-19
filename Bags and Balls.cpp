#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,k,r,i;

    cin>>n>>k>>r;

    if((n)*((2*r)+((n-1)*r))/2  == k )
    {
        cout<<0;
    }

    else if((n)*((2*r)+((n-1)*r))/2  > k ) // bags can hold all balls
    {
        i = 1;
        while(i<=n)
        {
            if(((i)*((2*r)+((i-1)*r))/2) == k)
            {
                break;
            }

            else if(((i)*((2*r)+((i-1)*r))/2) > k)
            {
                i--;
                break;
            }
            i++;
        }
        cout<<(n-i);
    }

    else // balls more than what bags can hold
    {
        cout<<0;
    }

}
