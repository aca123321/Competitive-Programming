#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,i,x,a=0,b=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x==100)
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if(a%2 == 0)
    {
        if(b%2 == 0)
        {
            cout<<"YES";
        }
        else
        {
            if(a>0)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
    }
    else
    {
        cout<<"NO";
    }
}
