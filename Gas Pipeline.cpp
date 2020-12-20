#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,i,t,a,b,c,f,sec,l,x,y;

    cin>>t;
    string s;

    while(t--)
    {
        cin>>n>>a>>b;
        cin>>s;

        x = (n*a)+(n+1)*b;

        if((2*a)-b >= 0)
        {
            f = 1;
            sec = 0;

            for(i=0;i<n;i++)
            {
                if(s[i] == '1')
                {
                    f = i;
                    break;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if(s[i] == '1')
                {
                    sec = i;
                    break;
                }
            }
            l = sec-f+1;
            if(l > 0)
            {
                x += 2*a;
                x += (l+1)*b;
            }
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(s[i] == '0')
                {
                    if(i != 0)
                    {
                        if(s[i-1] == '1' && s[i+1] == '1')
                        {
                            x -= a;
                            x += b;
                        }
                        else if(s[i+1] == '1')
                        {
                            x += a+b;
                        }
                    }
                    else
                    {
                        if(s[i+1] == '1')
                        {
                            x += a+b;
                        }
                    }
                }
                else
                {
                    x += b;
                    if(s[i+1] == '0')
                    {
                        x += a;
                    }
                }
            }
        }

        cout<<x<<endl;
    }

}
