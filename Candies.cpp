#include<bits/stdc++.h>
using namespace std;

long long int bin_search(long long int ,long long int, long long int);
int amount_flag(long long int, long long int );

main()
{
    long long int n,a;

    cin>>n;

    a = bin_search(1,n,n);

    cout<<a;
}

long long int bin_search(long long int low, long long int high, long long int n)
{
    long long int mid;
    mid = (low + high)/2;

    if(low == high)
    {
        return mid;
    }

    if(amount_flag(mid,n))
    {
        return(bin_search(low,mid,n));
    }

    else
    {
        return(bin_search(mid+1,high,n));
    }
}

int amount_flag(long long int x, long long int n)
{
    long long int sumv=0, sump=0;

    while(1)
    {
        if(n>0)
        {
            if(n>x)
            {
                sumv += x;
                n -= x;
            }

            else
            {
                sumv += n;
                n = 0;
            }

            sump += (n/10);
            n -= (n/10);
        }

        else
        {
            break;
        }
    }

    if(sumv >= sump)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
