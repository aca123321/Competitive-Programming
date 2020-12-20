#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli n,i,a,b,j;

    string s,t="";
    cin>>s;
    n = s.length();

    for(i=0;i<26;i++)
    {
        t += char(97+i);
    }

    if(n == 1)
    {
        if(s[0] == '?')
        {
            cout<<"a";
        }
        else
        {
            cout<<s;
        }
        return 0;
    }

    for(i=1;i<n-1;i++)
    {
        for(j=0;j<26;j++)
        {
            if(t[j] != s[i-1] && t[j] != s[i+1] && s[i] == '?')
            {
                s[i] = t[j];
                break;
            }
        }
    }

    if(s[0] == '?')
    {
        for(j=0;j<26;j++)
        {
            if(t[j] != s[1])
            {
                s[0] = t[j];
                break;
            }
        }
    }

    if(s[n-1] == '?')
    {
        for(j=0;j<26;j++)
        {
            if(t[j] != s[n-2])
            {
                s[n-1] = t[j];
                break;
            }
        }
    }

    cout<<s;
}
