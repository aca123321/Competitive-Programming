#include<iostream>
using namespace std;

main()
{
    int n,m,a,b,cost=0;

    cin>>n>>m>>a>>b;

    if((float(b)/m)<a)
    {
        cost += b*(n/m);

        if(b<a*(n%m))
        {
            cost += b;
        }

        else
        {
            cost += a*(n%m);
        }
    }

    else
    {
        cost += a*n;
    }

    cout<<cost;
}
