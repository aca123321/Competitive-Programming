#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i,x,flag=0;
    string s;

    cin>>s;
    n = s.length();

    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            s[i]='#';
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        for(i=0;i<n;i++)
        {
            if(s[i] != '#')
            {
                cout<<s[i];
            }
        }
    }

    else
    {
        for(i=0;i<n-1;i++)
        {
            cout<<1;
        }
    }
}
