#include<bits/stdc++.h>
using namespace std;

main()
{
    string a,b;
    int i,na,nb,flag=0;

    cin>>a;
    cin>>b;

    na = a.length();
    nb = b.length();

    for(i=0;i<na;i++)
    {
        if(int(a[i])>64 && int(a[i])<91)
        {
            a[i] = char(int(a[i])+32);
        }
    }

    for(i=0;i<nb;i++)
    {
        if(int(b[i])>64 && int(b[i])<91)
        {
            b[i] = char(int(b[i])+32);
        }
    }

    for(i=0;i<min(na,nb);i++)
    {
        if(int(a[i])<int(b[i]))
        {
            cout<<-1;
            flag = 1;
            break;
        }

        else if(int(a[i])>int(b[i]))
        {
            cout<<1;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        if(na > nb)
        {
            cout<<1;
        }

        else if(na < nb)
        {
            cout<<-1;
        }

        else
        {
            cout<<0;
        }
    }
}
