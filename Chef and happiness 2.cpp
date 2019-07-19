#include<bits/stdc++.h>
using namespace std;

struct two
{
    int a, aa;
};

bool comp(struct two p, struct two q)
{
    if(p.aa <= q.aa)
    {
        return true;
    }

    return false;
}

main()
{
    int t,b,n,i,pre;
    struct two *arr;

    cin>>t;

    arr = new struct two[100100];

    while(t--)
    {
        cin>>n;

        arr[0].a = arr[0].aa = -1;

        for(i=1;i<=n;i++)
        {
            cin>>arr[i].a;
        }

        b = 0;

        for(i=1;i<=n;i++)
        {
            if(arr[i].a <= n)
            {
                arr[i].aa = arr[arr[i].a].a;
            }
        }

        sort(arr,arr+(n+1),comp);

        for(i=1;i<n;i++)
        {
            if((arr[i].aa == arr[i+1].aa)&&(arr[i].a != arr[i+1].a))
            {

                    cout<<"Truly Happy\n";
                    b = 1;
                    break;
            }
        }

        if(b == 0)
        {
            cout<<"Poor Chef\n";
        }
    }
}

