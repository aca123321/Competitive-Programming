#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli s,n,remainder,a;

    // n is a power of 2

    s = 7;
    n = 4;
    // getting the value of s%n using bit manipulation (ie. s&(~(-n)) )

    a = ~(-n);
    remainder = s&(a);
    // OR
    remiander = s&(n-1);

    cout<<a<<endl;
    cout<<remainder;
}
