#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back

main()
{
    lli n,i,a,key;
    cout<<"Enter the key:\n";
    cin>>key;
*
    fflush(stdin);
    cout<<"Enter the string to be encoded\n";
    string s,t;
    fflush(stdout);
    getline(cin,s);
    fflush(stdin);
    n = s.length();

    vector<char> v[key];

    i = 0;
    while(i<n && i<key)
    {
        v[i].pb(s[i]);
        i++;
    }

    i=0;
    while(i<(n-key))
    {
        if((i/(key-1))%2 == 0)
        {
            a = key-2-(i%(key-1));
        }
        else
        {
            a = 1 + (i%(key-1));
        }
        v[a].pb(s[key+i]);
        i++;
    }

    t = "";
    for(i=0;i<key;i++)
    {
        for(auto it: v[i])
        {
            t += it;
        }
    }

    cout<<t;
}
