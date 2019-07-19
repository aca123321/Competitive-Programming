#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct node
{
    long long int f,s;
};

main()
{
    lli n,i,temp,a,b,flag=0,j,k;

    cin>>n;
    struct node arr[n+1],*next;

    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        arr[i].f = a;
        arr[i].s = b;
    }

    for(k=0;k<n;k++)
        {
            j = n;
            i = 1;

            while(j--)
            {
                next = &(arr[arr[i].f]);

                if((*next).f != arr[i].s)
                {
                    if((*next).s == arr[i].s)
                    {
                        temp = (*next).s;
                        (*next).s = (*next).f;
                        (*next).f = temp;
                    }

                    else
                    {
                        flag++;
                        break;
                    }
                }

                i = arr[i].f;
            }
        }

    if(flag == 0)
    {
        flag = 0;
    }

    else
    {
        temp = arr[1].s;
        arr[1].s = arr[1].f;
        arr[1].f = temp;


        for(k=0;k<n;k++)
        {
            j = n;
            i = 1;

            while(j--)
            {
                next = &(arr[arr[i].f]);

                if((*next).f != arr[i].s)
                {
                    if((*next).s == arr[i].s)
                    {
                        temp = (*next).s;
                        (*next).s = (*next).f;
                        (*next).f = temp;
                    }
                }

                i = arr[i].f;
            }
        }

    }

    for(i=1;i<=n;i++)
    {
        cout<<arr[i].f<<" ";
    }
}
