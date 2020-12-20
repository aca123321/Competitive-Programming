#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define sec second

vector<lli> p;

bool isReachable(lli from, lli to)
{
    lli a,i,j;
    if(from == to)
    {
        return true;
    }
    else if(from > to)
    {
        swap(from,to);
    }
    for(i=from+1;i<=to;i++)
    {
        auto it = find(p.begin(),p.end(),i);
        if(it == p.end())
        {
            return false;
        }
    }
    return true;
}

main()
{
    lli n,k,i,t,a,b,c;
    vector<lli> v,temp;
    map<lli,vector<lli>> m;
    map<lli,lli> f;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        v.clear();
        p.clear();
        m.clear();
        f.clear();
        c = 0;

        for(i=0;i<n;i++)
        {
            cin>>a;
            v.pb(a);
        }
        temp = v;
        sort(temp.begin(),temp.end());
        for(i=0;i<n;i++)
        {
            m[temp[i]].pb(i);
        }
        for(i=0;i<k;i++)
        {
            cin>>a;
            p.pb(a);
        }

        for(i=0;i<n;i++)
        {
            if(! isReachable(i, m[v[i]][f[v[i]]] ) )
            {
                c = 1;
                cout<<"NO\n";
                break;
            }
            else
            {
                f[v[i]]++;
            }
        }
        if(c == 0)
        {
            cout<<"YES\n";
        }
    }

}
