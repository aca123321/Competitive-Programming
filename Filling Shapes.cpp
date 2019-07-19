#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,ans;

    cin>>n;

    if(n%2 != 0)
    {
        cout<<0;
    }
    else
    {
        a = n/2;
        ans = 1;
        for(i=0;i<a;i++)
        {
            ans *= 2;
        }
        cout<<ans;
    }
}
