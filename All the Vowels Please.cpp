#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,m,i,flag = 0,a,b,j,sum=0,k,c,d;
    string s="aeiou";

    cin>>k;

    if(k<25)
    {
        cout<<-1;
        return 0;
    }

    a = floor(sqrt(k));
    b = k/a;

    lli l;

    for(i=5;i<=a;i++)
    {
        if(k%i == 0)
        {
            b = k/i;
            if(b>=5)
            {
                n = i;
                m = b;
                for(j=0;j<n;j++)
                {
                    for(l=0;l<m;l++)
                    {
                        if(l<5)
                        {
                            cout<<s[(j+l)%5];
                        }
                        else
                        {
                            cout<<s[(j)%5];
                        }
                    }
                }

                flag = 1;
                return 0;

            }
        }
    }

    if(flag == 0)
    {
        cout<<-1;
    }
}

