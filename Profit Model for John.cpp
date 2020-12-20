#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define f first
#define pb push_back
#define sec second

map<lli, set<lli>> m;
set<lli> s;
lli arr[100001];
set<pair<lli,lli>> ans;

main()
{
    lli n,i,t,a,b,j,count=0;

    pair<lli,lli> p;
    map<lli, set<lli>> :: iterator it;
    set<lli> :: iterator sit;

    cin>>n>>t;

    for(i=0;i<n;i++)
    {
        cin>>a;
        arr[i] = a;
        m[a].insert(i);
    }

    for(j=0;j<t;j++)
    {
        cin>>a;
        ans.clear();
        for(i=0;i<n;i++)
        {
            b = a - arr[i];
            s = m[b];
            if(s.size() > 0)
            {
                cout<<b<<" found\n";
                sit = s.upper_bound(b);
                if(sit != s.end())
                {
                    a = *(sit) + 1;
                    b = i+1;
                    ans.insert({a,b});
                }
            }
            else
            {
                cout<<b<<" not found\n";
            }
        }
        if(ans.size() > 0)
        {
            p = *(ans.begin());
            cout<<p.sec<<" "<<p.f;
        }
        else
        {
            cout<<"-1";
        }
        if(j < t-1)
        {
            cout<<",";
        }
    }
}
