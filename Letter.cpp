#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define s second
#define f first

main()
{
    lli i,n,nh,a,b;
    string h,s;
    map<char,lli> m;

    getline(cin,h);
    getline(cin,s);
    nh = h.length();
    n = s.length();

    for(i=0;i<nh;i++)
    {
        m[h[i]]++;
    }

    for(i=0;i<n;i++)
    {
        if(m[s[i]]>0)
        {
            m[s[i]] = m[s[i]] - 1;
        }
        else if(s[i] != ' ')
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
}
