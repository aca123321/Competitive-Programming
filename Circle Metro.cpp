#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,i,a,b,x,y;

    cin>>n>>a>>x>>b>>y;
    a--;
    x--;
    b--;
    y--;

    lli count = 0;

    while(count<n)
    {
        a = a%n;
        if(b<0)
        {
            b = n-1;
        }

        count++;
        if(a == b)
        {
            cout<<"YES";
            return 0;
        }

        if(a == x)
        {
            cout<<"NO";
            return 0;
        }
        else if(b == y)
        {
            cout<<"NO";
            return 0;
        }
        a++;
        b--;
    }

    cout<<"NO";
    return 0;
}
