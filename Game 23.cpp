#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    long double n,i,m,a,ans=0;

    cin>>n>>m;
    a = m/n;

    if(floor(a) == ceil(a))
    {
        while(int(a)%2 == 0)
        {
            a /= 2;
            ans += 1;
        }

        while(int(a)%3 == 0)
        {
            a /= 3;
            ans += 1;
        }

        if(a != 1)
        {
            cout<<-1;
        }

        else
        {
            cout<<ans;
        }
    }

    else
    {
        cout<<-1;
    }
}
