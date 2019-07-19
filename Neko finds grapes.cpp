#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,m,ea=0,eb=0,oa=0,ob=0;

    cin>>n>>m;
    lli a,b;

    for(i=0;i<n;i++)
    {
        cin>>a;

        if(a%2 == 0)
        {
            ea++;
        }
        else
        {
            oa++;
        }
    }

    for(i=0;i<m;i++)
    {
        cin>>b;

        if(b%2 == 0)
        {
            eb++;
        }
        else
        {
            ob++;
        }
    }

    lli ans = 0;

    ans += min(ea,ob) + min(eb,oa);

    cout<<ans;
}
