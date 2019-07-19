#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli n,nt,b,i;
    string s,t;
    char a;
    vector<lli> v;

    cin>>s;
    cin>>t;
    n = s.length();
    nt = t.length();

    if(n != nt)
    {
        cout<<"NO";
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(s[i] != t[i])
        {
            v.pb(i);
        }
    }

    if(v.size()>2 || v.size() == 1)
    {
        cout<<"NO";
        return 0;
    }

    a = s[v[0]];
    s[v[0]] = s[v[1]];
    s[v[1]] = a;

    for(i=0;i<n;i++)
    {
        if(s[i] != t[i])
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
}
