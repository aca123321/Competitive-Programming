#include<bits/stdc++.h>
using namespace std;

bool comp(struct point, struct point);

struct point
{
    long long int x,y;
};

int main()
{
    int t,n,i;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        struct point *arr;
        arr = new point[n];

        for(i=0;i<n;i++)
        {
            scanf("%lld%lld",&((*(arr+i)).x),&((*(arr+i)).y));
        }

        sort(arr,arr+n,comp);

        for(i=0;i<n;i++)
        {
            printf("%lld %lld\n",(arr+i)->x,(arr+i)->y);
        }
    }

    return 0;
}

bool comp(struct point a , struct point b)
{
    return((a.x < b.x)?(true):( (a.x == b.x)?((a.y > b.y)?true:false):false)) ;
}
