#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli ifpal(string s, lli n)
{
    lli mid,res = -1,count=0,i;

    if(n == 1)
    {
        return -1; //pal but can't change to good pal
    }

    if(n%2 == 0)
    {
        mid = (n/2) - 1;
    }

    else
    {
        mid = (n/2);
    }

    for(i=0;i<(n/2);i++)
    {
        if(s[i] != s[mid])
        {
            res = i;
        }

        if(s[i] == s[n-1-i])
        {
            count++;
        }
    }

    if(count == (n/2))
    {
        return res;
    }

    else
    {
        return -5;
    }

}

main()
{
    lli t,i,n,mid,res;
    char c;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;

        n = s.length();

        res = ifpal(s,n);

        if(n%2 == 0)
        {
            mid = (n/2) - 1;
        }

        else
        {
            mid = (n/2);
        }

        if(res == -5)
        {
            cout<<s<<endl;
        }

        else if(res == -1)
        {
            cout<<res<<endl;
        }

        else
        {
            c = s[mid];
            s[mid] = s[res];
            s[res] = c;

            cout<<s<<endl;
        }
    }
}

