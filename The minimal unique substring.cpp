#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,k,i,a,diff=0;
    string s,t;
    cin>>n>>k;

    if(n==k)
    {
        for(i=0;i<n;i++)
        {
            cout<<1;
        }
        return 0;
    }

    diff = n-k;

    if(k == 1)
    {
        cout<<1;
        for(i=0;i<n-1;i++)
        {
            cout<<0;
        }
        return 0;
    }

    a = diff/2;

    if(n%2 != 0)
    {
        if(2*k < n)
        {
            if(((n-1)/2)%2 == 0)
            {
                s = "";
                for(i=0;i<(n-1)/2;i++)
                {
                    if(i%2 == 0)
                    {
                        s += '0';
                    }
                    else
                    {
                        s += '1';
                    }
                }
                t =

            }
        }
    }
}
