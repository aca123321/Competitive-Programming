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

        for(i=0;i<n;i++)
        {
            cin>>arr[i].a;
            arr[i].a = arr[i].a - 1;
        }

        b = 0;

        for(i=0;i<n;i++)
        {
            arr[i].aa = arr[arr[i].a].a;
        }

        sort(arr,arr+n,comp);


      /*  for(i=0;i<n;i++)
        {
            cout<<arr[i].aa<<" "<<arr[i].a<<endl;
        }
      */

        for(i=0;i<n-1;i++)
        {
            if(arr[i+1].aa <n && arr[i+1].a < n)
            {
                if((arr[i].aa == arr[i+1].aa) && (arr[i].a != arr[i+1].a) )
                {
                    cout<<"Truly Happy\n";
                    b = 1;
                    break;
                }
            }
        }


        if(b == 0)
        {
            cout<<"Poor Chef\n";
        }
}

}
