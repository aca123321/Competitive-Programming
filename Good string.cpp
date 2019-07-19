#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli i,n,t,a,b;

    cin>>t;

    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;

        a = -1;
        b = -1;

        if(s[0] == '>' || s[n-1] == '<')
        {
            cout<<0;
        }

        else
        {
            if(n == 2 && (s[0] != '>' || s[n-1] != '<'))
            {
                cout<<1;
            }

            else
            {
                for(i=0;i<n;i++)
                {
                    if(s[i] == '>')
                    {
                        a = i;
                        break;
                    }
                }

                for(i=n-1;i>=0;i--)
                {
                    if(s[i] == '<')
                    {
                        b = i;
                        break;
                    }
                }

                if(a<b)
                {
                    if((n-1-b)>a)
                    {
                        cout<<(a);
                    }

                    else
                    {
                        cout<<(n-1-b);
                    }
                }

                else
                {
                    if((n-1-a)>b)
                    {
                        cout<<(b+1);
                    }

                    else
                    {
                        cout<<(n-a);
                    }
                }
            }
        }
    }


}
