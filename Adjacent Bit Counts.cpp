#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli abc(lli n, lli k, lli a)
{
    lli b,c;

    if(n == 1)
    {
        if(k == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    if(a == 0)
    {
        b = abc(n-1,k,0);
        c = abc(n-1,k,1);
    }
    else
    {
        b = abc(n-1,k,0);
        c = abc(n-1,k-1,1);
    }

    return (b+c);

}

main()
{
    lli n,i,a,k;

    cin>>n>>k;

    a = abc(n,k,1);
    a += abc(n,k,0);

    cout<<a;
}
