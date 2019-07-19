#include<bits/stdc++.h>
using namespace std;

#define lli unsigned long long int

lli fact(lli n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }

    else
    {
        return (n*(fact(n-1)));
    }
}

lli comb(lli k,lli n)
{
    lli num=1, den=1,temp=k;

    n = min(n, k-n);

    while(temp > (k-n))
    {
        num *= temp;
        temp--;
    }

    den = fact(n);

    return (num/den);
}

lli com(lli n, lli k)
{
    lli res = 1;

    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (lli i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

main()
{
    lli t,n,m,k,sum,i;

    cin>>t;

    while(t--)
    {
        sum = 0;
        cin>>n>>m>>k;

        sum += 1;

        lli a, b;

        a = m - (n*k);

        for(i=1;i<=(a);i++)
        {
            sum += com(i+n-1,n-1);
        }

        cout<<sum;
    }
}
