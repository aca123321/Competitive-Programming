#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    ios_base::sync_with_stdio(false);

    lli maxh = INT_MIN,maxy = INT_MIN,x,y,a,b;
    int n,i;
    char c;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>c;
        cin>>x>>y;

        a = max(x,y);
        b = min(x,y);

        if(c == '+')
        {
            if(a>maxh)
            {
                maxh = a;
            }

            if(b>maxy)
            {
                maxy = b;
            }
        }

        else
        {
            if(a>=maxh && b>=maxy)
            {
                cout<<"YES\n";
            }

            else
            {
                cout<<"NO\n";
            }
        }
    }



}
