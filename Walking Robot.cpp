#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,a,b,count = 0,capa,capb,pumps=0;

    cin>>n>>b>>a;
    capa = a;
    capb = b;
    lli s[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i] == 1)
        {
            pumps++;
        }
    }

    for(i=0;i<n;i++)
    {
        if(s[i] == 0)
        {
            if(a>0)
            {
                a--;
                count++;
            }
            else
            {
                if(b>0)
                {
                    b--;
                    count++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            if(a == capa)
            {
                a--;
                count++;
            }
            else
            {
                if(b>0)
                {
                    b--;
                    a++;
                    count++;
                }
                else
                {
                    if(a>0)
                    {
                        a--;
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

    }

    cout<<count;

}
