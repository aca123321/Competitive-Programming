#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,t,i,a,b,c,k;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        if(a > b)
        {
            n = a;
            a = b;
            b = n;
        }
        n = b-a;
        c = 0;
        c += n/10;
        if(n%10 != 0)
        {
            c++;
        }
        cout<<c<<endl;
    }

}
