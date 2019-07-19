#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb(x) push_back(x)
#define f first
#define s second

main()
{
    lli i,n,h1,h2,m1,m2,t1,t2,t3;
    char c;

    cin>>h1;
    cin>>c;
    cin>>m1;
    cin>>h2;
    cin>>c;
    cin>>m2;

    t1 = h1*(60)+m1;
    t2 = h2*(60)+m2;
    t3 = (t1+t2)/2;
    lli a = t3/(60);
    lli b = t3%(60);

    if(a>=10)
    {
        cout<<a<<":";
    }

    else
    {
        cout<<"0"<<a<<":";
    }

    if(b>=10)
    {
        cout<<b;
    }

    else
    {
        cout<<"0"<<b;
    }
}
