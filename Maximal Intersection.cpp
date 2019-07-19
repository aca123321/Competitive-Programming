#include<iostream>
#include<limits.h>
using namespace std;

struct seg
{
    long long int l,r,len;
};

main()
{
    seg *s;
    long long int n,i,maxbl,minbr,maxbl2,minbr2,maxal,minar,bl,br,bl2,br2,bl2,br2;

    s = new seg[n];

    for(i=0;i<n;i++)
    {
        cin>>s[i].l>>s[i].r;
        s[i].len = r-l;
    }

    maxbl = s[2].l;
    minbr = s[2].r;
    bl = 0;
    br = 0;

    for(i=1;i<n;i++)
    {
        if((s[i].l) >= maxbl)
        {
            bl2 = bl;
            maxbl2 = maxbl;
            maxbl = (s[i].l);
            bl = i;
        }

        if((s[i].r) <= minbr)
        {
            br2 = br;
            minbr2 = minbr;
            minbr = (s[i].r);
            br = i;
        }
    }

    if(maxbl > minbr)
    {

    }
}
