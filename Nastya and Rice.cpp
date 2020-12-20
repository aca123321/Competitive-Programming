#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,c,d,x,t,y;

    cin>>t;

    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        x = (a-b)*n;
        y = (a+b)*n;

        if( (x < (c-d) && y >= (c-d)) || (x>=(c-d) && (x<=(c+d))))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

}
