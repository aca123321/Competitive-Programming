#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli sod(lli x)
{
    lli sum=0;

    while(x/10 != 0)
    {
        sum += x%10;
        x = x/10;
    }

    sum += x;

    return sum;
}

main()
{

}
