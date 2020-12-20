#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,t,j,k;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        if(__gcd(a,b) == 1)
        {
            cout<<"finite\n";
        }
        else
        {
            cout<<"infinite\n";
        }

    }

}

