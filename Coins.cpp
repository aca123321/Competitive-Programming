#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,s;

    cin>>n>>s;

    i = s/n;

    if(s%n == 0)
    {
        cout<<i;
    }

    else
    {
        cout<<(i+1);
    }
}
