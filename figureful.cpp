#include<bits/stdc++.h>
using namespace std;

#define lli long long int

int main()
{
    lli n,a,b,t,i;
    string name;

    cin>>n;

    pair <lli, lli > p;

    map < pair <lli, lli > , string> m;
    map < pair <lli, lli > , string> :: iterator it;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;

        p = make_pair(a,b);

        cin>>name;

        it = m.find(p);

        if(it == m.end())
        {
            m.insert(make_pair(p,name));
        }

        else
        {
            m[p] = name;
        }
    }

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        p = make_pair(a,b);

        cout<<m[p]<<endl;
    }

    return 0;
}
