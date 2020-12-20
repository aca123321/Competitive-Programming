#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli s,a;
    bool ans;

    cin>>s;

    s -= (s&(-s));
    // OR
    ans = (s&(s-1))==0;

    if(s == 0)
    {
        cout<<"True\n";
    }
    else
    {
        cout<<"False\n";
    }


}
