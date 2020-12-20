#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

lli two[21],a;

main()
{
    lli n,i,t,b,c,x,y,j,k,l,r;

    cin>>n>>l>>r;
    a = 1;
    for(i=0;i<21;i++)
    {
        two[i] = a;
        a *= 2;
    }

    b = two[l] - 1 + (n-l);
    a = two[r] - 1 + two[r-1]*(n-r);

    cout<<b<<" "<<a;
}

