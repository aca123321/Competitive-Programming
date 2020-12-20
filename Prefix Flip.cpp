#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

string s,t;
lli n;
vector<lli> v;

char invert(char bit)
{
    if(bit == '0')
    {
        return '1';
    }
    return '0';
}

char roll()
{
    lli i;

    char cur = s[0];

    for(i=1;i<n;i++)
    {
        if(cur != s[i])
        {
            v.pb(i);
            cur = invert(cur);
        }
    }
    return cur;
}

void equalise(char cur)
{
    lli i;

    for(i=n-1;i>=0;i--)
    {
        if(cur != t[i])
        {
            v.pb(i+1);
            cur = invert(cur);
        }
    }
}

main()
{
    lli i,T,a,b,c,j,k;

    cin>>T;
    char finalRollChar;

    while(T--)
    {
        v.clear();
        cin>>n;
        cin>>s;
        cin>>t;

        finalRollChar = roll();
        equalise(finalRollChar);

        cout<<v.size()<<" ";
        for(auto it: v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
