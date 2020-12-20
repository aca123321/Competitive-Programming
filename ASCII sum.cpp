#include<bits/stdc++.h>
using namespace std;

#define lli long long int

main()
{
    lli a,n,i;
    map<char,lli> m;

    for(i=0;i<26;i++)
    {
        m[char(97+i)] = i;
    }
    string s;
    cin>>s;
    n = s.length();
    a = 0;

    for(auto it: m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(i=0;i<n;i++)
    {
        a += m[s[i]];
    }

    cout<<a;

}
