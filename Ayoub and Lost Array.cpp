#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define mod 1000000007

main()
{
    lli i,n,l,r,min,max;
    long double mindiv,maxdiv;

    cin>>n>>l>>r;

    min = n*l;
    max = n*r;

    mindiv = (ceil((double)(min)/(double)(3)))*((double)(3));
    maxdiv = (floor((double)(max)/(double)(3)))*((double)(3))

    if(mindiv > maxdiv)
    {
        cout<<0;
    }

    else
    {

    }

}
