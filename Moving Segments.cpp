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
    map<lli,lli> freq;

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
        }

        m[0].pb(seg[0]);
        a = 1;
        for(i=1;i<n;i++)
        {
            flag = 0;
            for(j=0;j<m.size();j++)
            {
                for(auto it: m[j])
                {
                    if(ifIntersect(it,seg[i]) == 1)
                    {
                        m[j].pb(seg[i]);
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0)
            {
                m[a].pb(seg[i]);
                a++;
            }
        }
        flag = 0;
        for(auto it: m)
        {
            freq.clear();
            for(auto iit: it.sec)
            {
                freq[iit.v]++;
                if(freq[iit.v] >= 3)
                {
                    cout<<"NO";
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            cout<<"YES";
        }
        if(t != 0)
        {
            cout<<endl;
        }
    }

}
