#include<bits/stdc++.h>
using namespace std;

bool comp(long long int , long long int );

long long int fact(long long int x)
{
    if(x <= 0)
    {
        return 1;
    }

    return(x*fact(x-1));
}

#define comb(n,m) (fact(n) / ( ( fact(n-m) ) * ( fact(m) ) ) )


main()
{
    int a,b;

    cin>>a>>b;

    cout<<comb(a,b);
}
