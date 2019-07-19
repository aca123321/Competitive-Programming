#include<bits/stdc++.h>
using namespace std;

#define lli long long int

map < char , int > m;

bool comp(string a, string b)
{
    lli na,nb,i,min;

    na = a.length();
    nb = b.length();

    min = (na<=nb)?(na):(nb);

    for(i=0;i<min;i++)
    {
        if(m[a[i]] < m[b[i]])
        {
            return true;
        }

        else if(m[a[i]] == m[b[i]])
        {
            continue;
        }

        else
        {
            return false;
        }
    }

    return true;
}


main()
{
    lli n,i;

    cin>>n;

    string order, s[n];

    cin>>order;

    for(i=0;i<26;i++)
    {
        m.insert( make_pair(order[i],i));
    }

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }

    sort(s,s+n,comp);

    for(i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
}


