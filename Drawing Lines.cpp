#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct segment
{
    lli y,s,e;
};

struct segment refer,origin;

lli mat[1001][1001];

lli coj(segment a, segment b) // cost of journey
{
    lli res;

    if(b.y == a.y)
    {
        if(b.s >= a.e)
        {
            res = b.e - a.e;
        }

        else
        {
            res = 0;
        }
    }

    else
    {
        res = (a.e) + abs(b.y - a.y) + (b.e);
    }

    return res;
}

bool comp(segment , segment );

main()
{
    lli t,n,i,p,j,a,b,c,count,sum;
    cin>>t;

    origin.y = 0;
    origin.s = 0;
    origin.e = 0;

    while(t--)
    {
        cin>>n>>p;

        count = 0;

        struct segment seg[n],temp;

        sum = 0;

        for(i=0;i<n;i++)
        {
            cin>>seg[i].y>>seg[i].s>>seg[i].e;
        }

        refer = origin;

        sort(seg,seg+n,comp);

        i = 0;

        while(sum+coj(refer,seg[i]) <= p )
        {
            count++;
            sum += coj(refer,seg[i]);
            if(coj(seg[i+1],seg[i+2]) > coj(seg[i+2],seg[i+3]))
            {
                refer = seg[i+2];
            }
            else
            {
                refer = seg[i];
            }
            sort(seg+i+1,seg+n,comp);
            i++;
        }

        cout<<count<<endl;
    }
}

bool comp(segment a, segment b)
{
    if(coj(refer,a) < coj(refer,b))
    {
        return true;
    }

    return false;
}
