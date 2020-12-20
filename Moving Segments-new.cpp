#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define pb push_back
#define f first
#define sec second

struct segment
{
    lli l,r,v;
};

lli ifIntersect(segment x, segment y)
{
    lli i,j;
    segment a,b;
    a = (x.l<=y.l)?x:y;
    b = (x.l>y.l)?x:y;

    if(a.r>=b.l)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

main()
{
    lli n,i,a,t,b,c,j,k,flag;

    cin>>t;
    segment seg[1001];
    map<lli,vector<segment>> m;
    vector<pair<lli,lli>> v;

    while(t--)
    {
        cin>>n;
        m.clear();

        for(i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            seg[i].l = a;
            seg[i].r = b;
            seg[i].v = c;

            m[c].pb(seg[i]);
        }

        for(auto it: m)
        {
            flag = 0;
            v.clear();
            for(auto iit: it.sec)
            {
                v.pb({iit.l,0});
                v.pb({iit.r,1});
            }
            sort(v.begin(),v.end());
            a = 0;
            for(auto it: v)
            {
                if(it.sec == 0)
                {
                    a++;
                }
                else
                {
                    a--;
                }
                if(a >= 3)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
            {
                break;
            }
        }

        if(flag == 1)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        if(t != 0)
        {
            cout<<endl;
        }
    }



}
