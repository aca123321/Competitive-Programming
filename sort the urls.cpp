#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define s second

main()
{
    lli n,i;

    map<string, lli> m;
    vector<pair<lli , string>> v;
    vector<lli> ind;

    string st;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>st;
        m[st]++;
    }

    for(auto it: m)
    {
        v.pb({it.s,it.f});
    }

    sort(v.begin(),v.end());

    cout<<v.size()<<endl;
    for(i=v.size()-1;i>0;i--)
    {
        if(v[i].f != v[i-1].f)
        {
            ind.pb(i);
        }
    }

    if(v[1].f == v[0].f)
    {
        ind.pb(0);
    }

    lli j=ind[0];

    while(j<v.size())
    {
        cout<<v[j].s<<endl;
        j++;
    }

    for(i=1;i<ind.size();i++)
    {
        j = ind[i];
        while(j != ind[i-1])
        {
            cout<<v[j].s<<endl;
            j++;
        }
    }

}

/*

    lli j=ind[0];

    while(j<n)
    {
        cout<<v[j].s<<endl;
        j++;
    }

    for(i=1;i<ind.size();i++)
    {
        j = ind[i];
        while(j != ind[i-1])
        {
            cout<<v[j].s<<endl;
            j++;
        }
    }
*/
