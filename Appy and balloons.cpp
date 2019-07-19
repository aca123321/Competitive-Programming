#include<bits/stdc++.h>
using namespace std;

struct bc
{
    long long int a,b,x;
};

bool comp(struct bc, struct bc);

main()
{
    long long int n,m,i,sumbal=0;
    struct bc *arr  ;

    arr = new struct bc[n];

    cin>>n>>m;

    for(i=0;i<n;i++)
    {
        cin>>arr[i].a;
        sumbal += arr[i].a;
    }
    for(i=0;i<n;i++)
    {
        cin>>arr[i].b;
    }

    for(i=0;i<n;i++)
    {
        arr[i].x = (arr[i].a)*(arr[i].b);
    }

    if(m>=sumbal)
    {
        cout<<"0";
    }

    else
    {
        for(i=0;i<m;i++)
        {
            sort(arr,arr+n,comp);
            arr[0].x -= arr[0].b;
        }
    }

    sort(arr,arr+n,comp);

    cout<<arr[0].x;
}

bool comp(struct bc p, struct bc q)
{
    if(p.x > q.x)
    {
        return true;
    }

    else
    {
        if(p.x == q.x)
        {
            if(p.b > q.b)
            {
                return true;
            }

            else
            {
                if(p.b == q.b)
                {
                    if(p.a > q.a)
                    {
                        return true;
                    }

                    else
                    {
                        return false;
                    }
                }
            }
        }

        else
        {
            return false;
        }
    }
}
