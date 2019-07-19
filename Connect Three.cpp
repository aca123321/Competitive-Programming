#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

main()
{
    int a,b,i;

    pair<int, int> p[3];

    set<pair<int,int>> s;

    for(i=0;i<3;i++)
    {
        cin>>p[i].f>>p[i].s;
    }

    sort(p,p+3);

    for(i=p[0].f;i<=p[1].f;i++)
    {
        s.insert(make_pair(i,p[0].s));
    }

    a = p[0].s;
    b = p[1].s;

    if(b<a)
    {
        swap(a,b);
    }

    for(i=a;i<=b;i++)
    {
        s.insert(make_pair(p[1].f,i));
    }

    a = p[1].s;
    b = p[2].s;

    if(b<a)
    {
        swap(a,b);
    }

    for(i=a;i<=b;i++)
    {
        s.insert(make_pair(p[1].f,i));
    }

    a = p[1].f;
    b = p[2].f;

    for(i=a;i<=b;i++)
    {
        s.insert(make_pair(i,p[2].s));
    }

    cout<<s.size()<<endl;

    for(auto it = s.begin();it!=s.end();it++)
    {
        cout<<(*(it)).first<<" "<<(*(it)).second<<endl;
    }
}

