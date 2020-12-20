#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,c,t;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            c = a-b;
            if(c%2 == 0)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        else if(a == b)
        {
            cout<<0<<endl;
        }
        else
        {
            c = b-a;
            if(c%2 == 0)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
        }
    }

}
