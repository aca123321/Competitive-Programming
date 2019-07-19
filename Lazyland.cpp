#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct two
{
    lli a,b;
};

bool comp(struct two , struct two );

main()
{
    lli n,k,i,j,*job,*persuade,count=0,sum=0;

    struct two *arr;

    scanf("%lli",&n);
    scanf("%lli",&k);

    arr = new two[n];
    persuade = new lli[n];
    job = new lli[k+1];

    for(i=1;i<=k;i++)
    {
        job[i] = 0;
    }

    for(i=0;i<n;i++)
    {
        scanf("%lli",&(arr[i].a));
        persuade[i] = 0;
    }

    for(i=0;i<n;i++)
    {
        scanf("%lli",&(arr[i].b));
    }

    sort(arr,arr+n,comp);

    j = 0;

    for(i=0;i<n;i++)
    {
        if(job[arr[i].a] == 0)
        {
            job[arr[i].a] = 1;
            count++;
        }

        else
        {
            persuade[j++] = arr[i].b;
        }
    }

    sort(persuade,persuade+j);

    for(i=0;i<(k-count);i++)
    {
        sum += persuade[i];
    }

    printf("%lli",sum);
}

bool comp(struct two p, struct two q)
{
    if(p.b >= q.b)
    {
        return true;
    }

    return false;
}
