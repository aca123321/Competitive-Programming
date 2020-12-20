#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

string getString(lli a, lli b)
{
    lli i,freq;
    string ret="";
    char x;
    if(a==b)
    {
        return "";
    }
    else if(a<b)
    {
        x = '(';
        freq = b-a;
    }
    else
    {
        x = ')';
        freq = a-b;
    }

    for(i=0;i<freq;i++)
    {
        ret += x;
    }
    return ret;
}

main()
{
    lli n,i,t,a,b,j,k;
    string s;

    cin>>t;
    stringstream obj;
    vector<lli> v;
    vector<string> ans;
    char c;

    for(k=1;k<=t;k++)
    {
        cin>>s;
        n = s.length();
        v.clear();

        v.pb(0);
        for(i=0;i<n;i++)
        {
            obj<<s[i];
            obj>>a;
            obj.clear();
            v.pb(a);
        }
        v.pb(0);

        string t = "";
        for(i=0;i<=n;i++)
        {
            obj<<v[i];
            obj>>c;
            obj.clear();
            t += c;
            t += getString(v[i],v[i+1]);
        }
        s = "";
        for(i=1;i<t.length();i++)
        {
            s += t[i];
        }

        cout<<"Case #"<<k<<": "<<s<<endl;
    }
}

/*
4
0000
101
111000
1
*/
