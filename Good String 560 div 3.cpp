#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

main()
{
    lli i,n,x,y,sum=0,o=0,e=0;
    vector<char> v;
    string s;

    cin>>n;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(v.size()%2 == 0)
        {
            v.pb(s[i]);
        }
        else if(v[v.size()-1] != s[i])
        {
            v.pb(s[i]);
        }
    }

    if(v.size()%2 != 0)
    {
        cout<<n-v.size()+1<<endl;
        for(i=0;i<v.size()-1;i++)
        {
            cout<<v[i];
        }
    }
    else
    {
        cout<<n-v.size()<<endl;
        for(auto it:v)
        {
            cout<<it;
        }
    }

}

