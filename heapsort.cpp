#include<bits/stdc++.h>
using namespace std;

#define lli long long int

struct heap
{
    lli arr[10001];
    lli size=0;
};

void heapify(heap* h)
{
    lli i=(h->size)-1,temp, par;

    while(i > 0)
    {
        par = (i-1)/2;
        if(h->arr[i] < h->arr[par])
        {
            temp = h->arr[par];
            h->arr[par] = h->arr[i];
            h->arr[i] = temp;
            i = par;
        }
        else
        {
            break;
        }
    }
}

void insert(heap* h, lli x)
{
    h->arr[h->size] = x;
    h->size = h->size + 1;
    heapify(h);
}

lli extract_min(heap* h)
{
    lli ret = h->arr[0],temp;
    h->arr[0] = h->arr[h->size-1];
    h->size = h->size - 1;
    lli cur = 0,left=1, right=2;

    while(left<h->size || right<h->size)
    {
        if(left<h->size && right<h->size)
        {
            if(h->arr[left] <= h->arr[right])
            {
                if(h->arr[left] < h->arr[cur])
                {
                    temp = h->arr[cur];
                    h->arr[cur] = h->arr[left];
                    h->arr[left] = temp;
                    cur = left;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(h->arr[right] < h->arr[cur])
                {
                    temp = h->arr[cur];
                    h->arr[cur] = h->arr[right];
                    h->arr[right] = temp;
                    cur = right;
                }
                else
                {
                    break;
                }
            }
        }
        else if(left<h->size)
        {
            if(h->arr[left] < h->arr[cur])
            {
                temp = h->arr[cur];
                h->arr[cur] = h->arr[left];
                h->arr[left] = temp;
                cur = left;
            }
            else
            {
                break;
            }
        }
        left = cur*2 + 1;
        right = cur*2 + 2;
    }
    return ret;
}

void display(heap* h)
{
    cout<<"Sorted in Ascending Order:\n";
    while(h->size != 0)
    {
        cout<<extract_min(h)<<" ";
    }
    cout<<endl;
}

main()
{
    lli i,j,n,a,t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        heap h;
        cout<<"n = "<<n<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a;
            insert(&h, a);
        }

        display(&h);
    }
}
