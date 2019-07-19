#include<bits/stdc++.h>
using namespace std;

struct circ
{
    long double x,y,r;
};

struct minmax
{
    long double min,max;
};

long double dist_centre(struct circ , struct circ );

main()
{
    long double n,q,query,i;
    circ *arr;
    minmax *range;
    cin>>n>>q;

    arr = new circ[n];
    range = new minmax[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i].x>>arr[i].y>>arr[i].r;
    }

    for()

    for(i=0;i<q;i++)
    {
        cin>>query;

    }
}

long double maxdist_circ(struct circ a, struct circ b)
{
    return (a.r + b.r + sqrt((pow((a.x - b.x),2)) + (pow((a.y - b.y),2))));
}

long double mindist_circ(struct circ a, struct circ b)
{
    return (sqrt((pow((a.x - b.x),2)) + (pow((a.y - b.y),2))) - a.r  -b.r);
}
