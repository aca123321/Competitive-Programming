#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli n,i,temp;

    vector<lli> a;
    vector<lli> b;
    vector<lli> c;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>temp;

        if(temp < 0)
        {
            a.push_back(temp);
        }

        else if(temp > 0)
        {
            b.push_back(temp);
        }

        else
        {
            c.push_back(temp);
        }
    }

    if(b.size() == 0)
    {
        for(i=0;i<2;i++)
        {
            b.push_back(a.back());
            a.pop_back();
        }
    }

    if(a.size()%2 == 0)
    {
        c.push_back(a.back());
        a.pop_back();
    }

    cout<<a.size()<<" ";
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<b.size()<<" ";
    for(i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<c.size()<<" ";
    for(i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
    }
}
