#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,a=0,b=0,c=0,da,db,dc;

    string s,t="";

    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i] == '0')
        {
            a++;
        }

        else if(s[i] == '1')
        {
            b++;
        }

        else
        {
            c++;
        }
    }

    da = a - (n/3);
    db = b - (n/3);
    dc = c - (n/3);

    for(i=0;i<n;i++)
    {
        if(da<0)
        {
            if(s[i] == '1' && db>0)
            {
                s[i] = '0';
                db--;
                da++;
            }

            else if(s[i] == '2' && dc>0 )
            {
                s[i] = '0';
                da++;
                dc--;
            }
        }

        else
        {
            break;
        }
    }

    for(i=(n/3);i<n;i++)
    {
        if(db<0)
        {
            if(s[i] == '0' && da>0)
            {
                s[i] = '1';
                db++;
                da--;
            }

            else if(s[i] == '2' && dc>0 )
            {
                s[i] = '1';
                db++;
                dc--;
            }
        }

        else
        {
            break;
        }
    }

    for(i=0;i<(n/3);i++)
    {
        if(db<0)
        {
            if(s[i] == '0' && da>0)
            {
                s[i] = '1';
                db++;
                da--;
            }

            else if(s[i] == '2' && dc>0 )
            {
                s[i] = '1';
                db++;
                dc--;
            }
        }

        else
        {
            break;
        }
    }

    for(i=2*(n/3);i<n;i++)
    {
        if(dc<0)
        {
            if(s[i] == '0' && da>0)
            {
                s[i] = '2';
                dc++;
                da--;
            }

            else if(s[i] == '1' && db>0 )
            {
                s[i] = '2';
                dc++;
                db--;
            }
        }

        else
        {
            break;
        }
    }

    for(i=0;i<2*(n/3);i++)
    {
        if(dc<0)
        {
            if(s[i] == '0' && da>0)
            {
                s[i] = '2';
                dc++;
                da--;
            }

            else if(s[i] == '1' && db>0 )
            {
                s[i] = '2';
                dc++;
                db--;
            }
        }

        else
        {
            break;
        }
    }

    cout<<s;
}
