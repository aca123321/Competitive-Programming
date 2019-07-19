#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli i,n,j,k,x,y,count=0,na=0,nb=0;

    string s="",t="",a="",b="";

    cin>>t;
    n = t.length();

    for(i=0;i<n;i++)
    {
        if(t[i] != 'a')
        {
            count++;
        }
    }

    if(count == 0) //all a
    {
        cout<<t;
        return 0;
    }

    if(count%2 != 0)
    {
        cout<<":(";
        return 0;
    }

    for(i=n-(count/2);i<n;i++)
    {
        if(t[i] != 'a')
        {
            b += t[i];
        }
        else
        {
            cout<<":(";
            return 0;
        }
    }

    j = 0;
    for(i=0;i<n;i++)
    {
        if(t[i] != 'a')
        {
            a += t[i];
            j++;
        }
        if(j == (count/2))
        {
            break;
        }
    }

    na = a.length();
    nb = b.length();

    if(na != nb)
    {
        cout<<":(";
        return 0;
    }

    for(i=0;i<na;i++)
    {
        if(a[i] != b[i])
        {
            cout<<":(";
            return 0;
        }
    }

    count /= 2;

    i = 0;
    while(count != 0)
    {
        if(t[i] != 'a')
        {
            count--;
        }
        cout<<t[i];
        i++;
    }
}
