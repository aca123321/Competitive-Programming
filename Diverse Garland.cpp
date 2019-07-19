#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,count=0;

    cin>>n;
    string s,t="";
    cin>>s;

    i = 0;

    t += s;

    while(i<n-2)
    {
        if(s[i] == s[i+1])
        {
            if(s[i] == 'R')
            {
                if(s[i+2] == 'R')
                {
                    s[i+1] = 'G';
                }

                else if(s[i+2] == 'G')
                {
                    s[i+1] = 'B';
                }

                else
                {
                    s[i+1] = 'G';
                }
            }

            else if(s[i] == 'G')
            {
                if(s[i+2] == 'R')
                {
                    s[i+1] = 'B';
                }

                else if(s[i+2] == 'G')
                {
                    s[i+1] = 'B';
                }

                else
                {
                    s[i+1] = 'R';
                }
            }

            else
            {
                if(s[i+2] == 'R')
                {
                    s[i+1] = 'G';
                }

                else if(s[i+2] == 'G')
                {
                    s[i+1] = 'R';
                }

                else
                {
                    s[i+1] = 'G';
                }
            }
        }

        i++;
    }

    if(s[n-2] == s[n-1])
    {
        if(s[n-2] == 'R')
        {
            s[n-1] = 'G';
        }

        else if(s[n-2] == 'G')
        {
            s[n-1] = 'R';
        }

        else
        {
            s[n-1] = 'G';
        }
    }

    for(i=0;i<n;i++)
    {
        if(s[i] != t[i])
        {
            count++;
        }
    }

    cout<<count<<endl;
    cout<<s;

}
